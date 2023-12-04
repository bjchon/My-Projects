# Title: Demo code for CSE 031 Lecture 15 (Fall 2021)
# Author: Santosh Chandrasekhar

.data # Define the program data.
prompt1:	.asciiz "Sum of a and b: "
newline:	.asciiz "\n"
prompt2:	.asciiz "Please enter a number: "
a:	.word 10
b:	.word 5

.text # Define the program instructions.
main:	la $a0, prompt1 # print prompt1
	li $v0, 4 
	syscall
	
	la  $t0, a
	lw  $s0, ($t0) 		# $s0 = a
	
	lw $s1, b 		# $s1 = b (a quicker way)
	
	# Set up arguments to sum 		
	add  $a0, $s0, $zero 	# set 1st arg of sum to a
	add  $a1, $s1, $zero 	# set 2nd arg of sum to b
	
	jal sum 		# call sum(a, b)
	
	add $a0, $v0, $zero 	# return value assumed to be in $v0. Copy it to $a0 to print
	li $v0, 1
	syscall 
	
	la $a0, newline 	# Print a newline
	li $v0, 4 
	syscall
	
	# Demonstration of a function (sumSquare) that calls another function (mult)
	
	la $a0, prompt2		# print input prompt
	li $v0, 4	
	syscall
	li $v0, 5		# read input (i) from user
	syscall
	move $s0, $v0		# $s0 = i

	la $a0, prompt2		# print input prompt 
	li $v0, 4 	
	syscall
	li $v0, 5		# read input (j) from user
	syscall
	move $s1, $v0		# $s1 = j

	add $a0, $zero, $s0	# set 1st arg of sumSquare to i
	add $a1, $zero, $s1	# set 2nd arg of sumSquare to j

	jal sumSquare		# call sumSquare(i, j)

	# recall that args (arguments) are values that are passed when calling a function
	# and params (parameters) are variables receiving the arg values

	add $a0, $zero, $v0	# Print result returned by sumSquare()
	la $v0, 1
	syscall
	
	j END			# jump to end of code

sum:	add $v0, $a0, $a1	# set return value to the sum of the two input parameters 
	jr  $ra			# return to main()
	
# assume the params of sumSquare are named x ($a0) and y ($a1)
sumSquare: addi $sp, $sp, -8	# make space on stack
	sw $ra, 4($sp)	 	# save ret addr (as call to mult will overwrite this)
	sw $a1, 0($sp)	 	# save y (as it will be needed later to calc sumSquare's ret value)
	
	add $a1, $zero, $a0	# set 2nd arg of mult to x (overwriting $a1 is okay as we saved it earlier)
	
	jal mult 	  	# call mult(x, x)
	
	lw $a1, 0($sp)	 	# restore y
	
	add $v0, $v0, $a1 	# set return value of sumSquare() to mult() + y
	
	lw $ra, 4($sp)	 	# restore ret addr
	addi $sp, $sp, 8  	# restore stack
	jr $ra 			# return to main()

# assume the params of mult are named x ($a0) and x ($a1)
mult:	mult $a0, $a1		# multiply x * x
	mflo $v0		# set the return value to the low order 32-bits of (x * x)
	jr $ra 			# return to sumSquare()	

END:	li $v0, 10 		# load a 10 (halt) into $v0
	syscall 		# the program ends
