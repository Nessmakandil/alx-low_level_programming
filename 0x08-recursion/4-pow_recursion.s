	.file	"4-pow_recursion.c"
	.text
	.globl	__pow_recursion
	.def	__pow_recursion;	.scl	2;	.type	32;	.endef
__pow_recursion:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$0, 12(%ebp)
	jns	L2
	movl	$-1, %eax
	jmp	L3
L2:
	cmpl	$0, 12(%ebp)
	jne	L4
	movl	$1, %eax
	jmp	L3
L4:
	movl	12(%ebp), %eax
	subl	$1, %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__pow_recursion
	imull	8(%ebp), %eax
L3:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
