#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>

typedef struct {
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

#define EI_MAG0     0
#define EI_MAG1     1
#define EI_MAG2     2
#define EI_MAG3     3
#define EI_CLASS    4
#define EI_DATA     5
#define EI_VERSION  6
#define EI_OSABI    7
#define EI_ABIVERSION   8

#define ELFMAG0     0x7F
#define ELFMAG1     'E'
#define ELFMAG2     'L'
#define ELFMAG3     'F'

#define ELFCLASS32  1
#define ELFCLASS64  2

#define ELFDATA2LSB 1
#define ELFDATA2MSB 2

#define ET_NONE     0
#define ET_REL      1
#define ET_EXEC     2
#define ET_DYN      3
#define ET_CORE     4

#define EM_NONE     0
#define EM_386      3
#define EM_X86_64   62

void display_error(const char* message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void display_elf_header(const Elf64_Ehdr* header) {
    printf("Magic:   %.4s\n", header->e_ident);
    printf("Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : (header->e_type == ET_DYN) ? "DYN (Shared object file)" : (header->e_type == ET_REL) ? "REL (Relocatable file)" : "Others");
    printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
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