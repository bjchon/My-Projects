.data 

original_list: .space 100 
sorted_list: .space 100

str0: .asciiz "Enter size of list (between 1 and 25): "
str1: .asciiz "Enter one list element: "
str2: .asciiz "Content of original list: "
str3: .asciiz "Enter a key to search for: "
str4: .asciiz "Content of sorted list: "
strYes: .asciiz "Key found!"
strNo: .asciiz "Key not found!"

space: .asciiz " "
newLine: .asciiz "\n"

.text 

# This is the main program.
# It first asks user to enter the size of a list.
# It then asks user to input the elements of the list, one at a time.
# It then calls printList to print out content of the list.
# It then calls inSort to perform insertion sort
# It then asks user to enter a search key and calls bSearch on the sorted list.
# It then prints out search result based on return value of bSearch
main: 
	addi $sp, $sp -8
	sw $ra, 0($sp)
	li $v0, 4 
	la $a0, str0 
	syscall 
	li $v0, 5	# Read size of list from user
	syscall
	move $s0, $v0
	move $t0, $0
	la $s1, original_list
loop_in:
	li $v0, 4 
	la $a0, str1 
	syscall 
	sll $t1, $t0, 2
	add $t1, $t1, $s1
	li $v0, 5	# Read elements from user
	syscall
	sw $v0, 0($t1)
	addi $t0, $t0, 1
	bne $t0, $s0, loop_in
	move $a0, $s1
	move $a1, $s0
	
	jal inSort	# Call inSort to perform insertion sort in original list
	
	sw $v0, 4($sp)
	li $v0, 4 
	la $a0, str2 
	syscall 
	la $a0, original_list
	move $a1, $s0
	jal printList	# Print original list
	la $a0, newLine
	syscall 
	li $v0, 4 
	la $a0, str4 
	syscall
	lw $a0, 4($sp)
	jal printList	# Print sorted list
	la $a0, newLine
	syscall 
	
	li $v0, 4 
	la $a0, str3 
	syscall 
	li $v0, 5	# Read search key from user
	syscall
	move $a3, $v0
	lw $a0, 4($sp)
	jal bSearch	# Call bSearch to perform binary search
	
	beq $v0, $0, notFound
	li $v0, 4 
	la $a0, strYes 
	syscall 
	j end
	
notFound:
	li $v0, 4 
	la $a0, strNo 
	syscall 
end:
	lw $ra, 0($sp)
	addi $sp, $sp 8
	li $v0, 10 
	syscall
	
	
# printList takes in a list and its size as arguments. 
# It prints all the elements in one line.
printList:
        #Your implementation of printList here  
        move $t0, $a0 # $t1 = original list 
        li $s0, 0 # i = 0 
        
PrintLoop:
        slt $t1, $s0, $a1  # if i is less than size set t0 to 1, a1 = size of list
        beq $t1, $zero, PrintEnd # branch to end print
        
        lw $a0, 0($t0) # $a0 = element
        li $v0, 1
        syscall
        
        la $a0, space 
        li $v0, 4
        syscall
        
        addi $t0, $t0, 4 # get next value 
        addi $s0, $s0, 1 # i++
        j PrintLoop
        
PrintEnd:
        li $v0, 4
        la $a0, original_list   
        jr $ra
        
#inSort takes in a list and it size as arguments. 
#It performs INSERTION sort in ascending order and returns a new sorted list
#You may use the pre-defined sorted_list to store the result
inSort:
        #Your implementation of inSort here
        li $t1, 1 # i = 1
        li $t2, 0 # another i 
        
        la $t8, original_list # load address of original list to t8
        la $t9, sorted_list # load address of sorted list to t9
   
Copy:
        bgt $t1, $a1, beginSort
        lw $t5, ($t8) #Get value from original_list
        sw $t5, ($t9) #Store the value from original_list to sorted_list
        
        addi $t8, $t8, 4 #Next Element
        addi $t9, $t9, 4 #Next Element
        
        addi $t1, $t1, 1 # i++
        j Copy
        
beginSort:
        la $t9, sorted_list  
        bge $t2, $a1, SortEnd # End Sort
        move $t3, $t2 # set another j = i 
        
SortWhile:
        mul $t5, $t3, 4 # 4 * i 
        add $t0, $t9, $t5 # assign A[4 * i] to t0
        
        ble $t3, 0, whileEnd # runs as long as t3 > 0 
        
        lw $t6, 0($t0) # $t6 = A[i]
        lw $t7, -4($t0)# $t7 = A[j-1]
        
        bge $t6, $t7, whileEnd # runs as long as arr[i] < arr[j-i] 
        
        sw $t7, 0($t0) # A[j-1] = A[j]
        sw $t6, -4($t0) # $t4 = A[j-1]
        
        subi $t3, $t3, 1 
        j SortWhile
        
whileEnd:
        addi $t2, $t2, 1
        j beginSort

SortEnd:
        la $v0, sorted_list
        jr $ra  

#bSearch takes in a list, its size, and a search key as arguments.
#It performs binary search RECURSIVELY to look for the search key.
#It will return a 1 if the key is found, or a 0 otherwise.
#Note: you MUST NOT use iterative approach in this function.
bSearch:
	# Your implementation of bSearch here
	
        #a0 = sorted list
        #a1 = SIZE
        #a3 = KEY        

        add $s0, $zero, $zero #s0 = lower bound
   
        Begin:
        bgt $s0, $a1, NumNotFound #If the lower bound is greater than the upper, search is over
        addi $t3, $zero, 4 #t3 = 4
        add $t1, $a1, $s0 # Lo + High
        sra $t1, $t1, 1 # (Lo + High) /2 = Mid
        mul $t3, $t3, $t1 # Mid number * 4
        add $t0, $t3, $a0 # t0= Middle of sorted list(lower bound/higher bound change)
        lw $t2, 0($t0) 
        
        beq $t2, $a3, NumFound # Branch if the middle number is equal to key 
        
        bgt $t2, $a3, LowerHalf # if middle < key. Check lower half. If middle > key check upper half.
        
        UpperHalf:
        addi $s0, $t1, 1 # Lower bound = Mid + 1 
        j Begin #Recursively call bsearch
        
        LowerHalf:
        addi $a1, $t1, -1 #Upper bound = Mid - 1
        j Begin #Recursively call bsearch
        
        NumFound:
        addi $v0, $zero, 1 #Return 1
        j ReturnSearch
        
        NumNotFound:
        add $v0, $zero, $zero #Return 0
        
        ReturnSearch:
        jr $ra
