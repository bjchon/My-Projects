.data
n: .word 25
str1: .asciiz"Less than\n"
str2: .asciiz"Less than or equal to\n"
str3: .asciiz"Greater than\n"
str4: .asciiz"Greater than or equal to\n"
prompt: .asciiz"Please, enter a number to compare to the number 25:\n"

.text
la $t0, n
lw $s0, 0($t0)

la $a0, prompt
li $v0, 4
syscall

li $v0, 5
syscall

la $s1, 0($v0)
#slt $t0, $s1, $s0
slt $t0, $s0, $s1
beq $t0, $zero, LTE
	li $v0, 4
	la $a0, str3
	syscall 
	j END

#bne 	$t0, $zero, LESS
	#li $v0, 4
	#la $a0, str4
	#syscall 
	#j END

#LESS: 
	#li $v0, 4
	#la $a0, str1
	#syscall 
	#j END

LTE:
	li $v0, 4
	la $a0, str2
	syscall 
	j END
	
END:
	li $v0, 10
	syscall
