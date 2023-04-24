        .data

# TPS 2 #3 (input prompt to be displayed)
prompt: .asciiz"Please, enter an integer: "



        .text
main: 		addi $sp, $sp, -4	# Moving stack pointer to make room for storing local variables (push the stack frame)
		# TPS 2 #3 (display input prompt)
		la $a0, prompt
		li $v0, 4
		syscall
		
		# TPS 2 #4 (read user input)
		li $v0, 5
		syscall
		
		addi $a0, $v0, 0
		addi $v0, $zero, 0
		
		jal recursion	# Call recursion(x)
		
		# TPS 2 #6 (print out returned value)
		addi $a0, $v0, 0
		li $v0, 1
		syscall
		
		j end		# Jump to end of program


# Implementing recursion
recursion:	addi $sp, $sp, -12	# Push stack frame for local storage

		# TPS 2 #7 
		sw $ra, 0($sp)
		
		
		addi $t0, $a0, 1
		bne $t0, $zero, not_minus_one
		
		# TPS 2 #8 (update returned value)
		addi $v0, $v0, 1
		
		j end_recur
			
not_minus_one:	bne $a0, $zero, not_zero

		# TPS 2 #9 (update returned value)
		addi $v0, $v0, 3
		
		j end_recur		

not_zero:	sw $a0, 4($sp) 	
		# TPS 2 #11 (Prepare new input argument, i.e. m - 2)
		subi $a0, $a0, 2
		
		
		jal recursion	# Call recursion(m - 2)
				# TPS 2 #12 
		
		
		# TPS 2 #13 (Prepare new input argument, i.e. m - 1)
		lw $a0, 4($sp)
		subi $a0, $a0 , 1
		
		jal recursion	# Call recursion(m - 1)
		
		# TPS 2 #14 (update returned value)
		
		
		j end_recur
		

# End of recursion function	
end_recur:	# TPS 2 #15 
		lw $ra, 0($sp)
		addi $sp, $sp, 12	# Pop stack frame 
		jr $ra

# Terminating the program
end:	addi $sp, $sp 4	# Moving stack pointer back (pop the stack frame)
		li $v0, 10 
		syscall
