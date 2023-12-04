# myFirstMips
#Bryant Chon

.data
n:	.word 1
.text

main: 
	move $t0, $s0
	sub $t1, $t0, 1
	sub $t2, $t1, 2
	sub $t3, $t2, 3
	sub $t4, $t3, 4
	sub $t5, $t4, 5
	sub $t6, $t5, 6
	sub $t7, $t6, 7
	
	la $a0, ($t7)
	li $v0, 1
	syscall
	
	li $v0, 10
	syscall
