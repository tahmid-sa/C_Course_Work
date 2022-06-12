	.file	"chlng1.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Line = %d\12\0"
.LC1:
	.ascii "chlng1.c\0"
.LC2:
	.ascii "FILE = %s\12\0"
.LC3:
	.ascii "Jan  4 2022\0"
.LC4:
	.ascii "Date = %s\12\0"
.LC5:
	.ascii "22:01:02\0"
.LC6:
	.ascii "Time = %s\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB53:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	movl	$5, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	leaq	.LC1(%rip), %rdx
	leaq	.LC2(%rip), %rcx
	call	printf
	leaq	.LC3(%rip), %rdx
	leaq	.LC4(%rip), %rcx
	call	printf
	leaq	.LC5(%rip), %rdx
	leaq	.LC6(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 9.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
