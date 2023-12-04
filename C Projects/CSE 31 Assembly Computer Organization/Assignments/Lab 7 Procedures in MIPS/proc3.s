	.data
x:	.word 5
y:	.word 10
z:	.word 15

	.text
MAIN: 
		la $t0, x
		lw $s0, 0($t0)		# s0 = x
		la $t0, y		
		lw $s1, 0($t0)		#s1 = y
		la $t0, z
		lw $s2, 0($t0)		#s2 = z	
		
		add $a0, $s0, 0		#a0 = m
		add $a1, $s1, 0		#a1 = n
		add $a2, $s2, 0		#a2 = o
				
		jal foo
		
		add $s2, $s2, $s1
		add $s2, $s2, $s0
		add $s2, $s2, $v1
		addi $a0, $s2 , 0
		li $v0, 1
		syscall
		j end
		
foo:
	addi $sp, $sp -4
	sw $ra, 0($sp)
	addi $sp, $sp -4
	sw $a0, 0($sp)
	addi $sp, $sp -4
	sw $a1, 0($sp)
	addi $sp, $sp -4
	sw $a2, 0($sp)
	
	add $a0, $a0, $a1		#a0 = a
	add $a1, $a1, $a2		#a1 = b
	add $a2, $a2, $s0		#a2 = c

	jal bar
	
	lw $a2, 0($sp)		# Restore a2 from main
	addi $sp, $sp 4
	lw $a1, 0($sp)		# Restore a1 from main
	addi $sp, $sp 4
	lw $a0, 0($sp)		# Restore a0 from main
	addi $sp, $sp 4
	
	addi $sp, $sp -4
	sw $v0, 0($sp)
	
	sub $a0, $s0, $s2		#a0 = a
	sub $a1, $s1, $s0		#a1 = b
	mul $a2, $s1, 2			#a2 = c
	
	jal bar
	
	addi $v1, $v0, 0
	lw $v0, 0($sp)		# Restore v0 from foo
	addi $sp, $sp 4
	
	add $v1, $v1, $v0
	
	lw $ra, 0($sp)		# Restore return address from main
	addi $sp, $sp 4
	jr $ra	
	 

bar: 	
	addi $sp, $sp -4
	sw $ra, 0($sp)
	addi $t0, $zero, 0
	sub $v0, $a2, $a0

	power: 
		beq $t0, $a1, done
		mul $v0, $v0, 2
		addi $t0, $t0, 1
		j power
	done: 
		lw $ra, 0($sp)		# Restore return address from foo
		addi $sp, $sp 4
		jr $ra

	
end:
	li $v0, 10		 
	syscall	

