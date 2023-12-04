# Title: Demo code for CSE 031 Lecture 14 (Fall 2021)
# Author: Santosh Chandrasekhar

.data # Define the program data.
greeting:	.asciiz "Hello World\n" #The string to print.
prompt1:	.asciiz "Ascii Characters of Hello (in hex): \n"
newline:	.asciiz "\n"

.text # Define the program instructions.
main: 	la $a0, prompt1 # Print prompt1
	li $v0, 4 
	syscall 	
	
	la  $t0, greeting # Load starting address of greeting ino $t0
	add $t1, $zero, $zero # i = 0
Loop:	addu $t2, $t1, $t0 # $t2 = Address of greeting + i (i.e., address of greeting[i])
	lbu  $a0, 0($t2) # Get character at address $t2 into $a0 (i.e., $a0 = greeting[i])
	addi $t1, $t1, 1 # i = i + 1
	li  $v0, 1 # Print ascii value of character stored in $a0 
	syscall 
	la $a0, newline # Print a newline
	li $v0, 4 
	syscall 	
	bne $t1, 5, Loop # Loop if i != 5
	
	li $v0, 10 # Load a 10 (halt) into $v0.
	syscall # The program ends.

