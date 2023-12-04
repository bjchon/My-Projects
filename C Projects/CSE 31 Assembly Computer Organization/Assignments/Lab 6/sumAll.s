.data
prompt: .asciiz"Please enter a number: "
evensum: .asciiz"The sum of the even numbers is: "
oddsum: .asciiz"The sum of the odd numbers is: "
nextline: .asciiz"\n"

.text

Prompt: 
	la $a0, prompt
	li $v0, 4
	syscall

	li $v0, 5
	syscall
	beq $v0, $zero, End
	rem $t0, $v0, 2
	beq $t0, $zero, Even
	add $s1, $s1, $v0
	j Prompt
	
	
Even:	add $s0, $s0, $v0
	j Prompt
	

End:
	la $a0, evensum
	li $v0, 4
	syscall
	la $a0, ($s0)
	li $v0, 1
	syscall
	la $a0, nextline
	li $v0, 4
	syscall
	la $a0, oddsum
	li $v0, 4
	syscall
	la $a0, ($s1)
	li $v0, 1
	syscall
	li $v0, 10
	syscall
