#include "main.h"
void display_error(const char* message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void display_elf_header(const Elf64_Ehdr* header) {
    int i;
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < 16; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            UNIX - System V\n");
    printf("  ABI Version:                       0\n");
    printf("  Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : (header->e_type == ET_DYN) ? "DYN (Shared object file)" : (header->e_type == ET_REL) ? "REL (Relocatable file)" : "Others");
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char* argv[]) {
    const char* filename = argv[1];
    int fd = open(filename, O_RDONLY);
    Elf64_Ehdr header;

    if (argc != 2) {
        display_error("Invalid number of arguments");
    }
    if (fd == -1) {
        display_error("Failed to open file");
    }
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        display_error("Failed to read ELF header");
    }
    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        display_error("Not an ELF file");
    }
    display_elf_header(&header);
    close(fd);
    return 0;
}