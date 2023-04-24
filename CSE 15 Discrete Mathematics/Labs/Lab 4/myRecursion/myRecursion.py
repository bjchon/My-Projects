import sys
sys.setrecursionlimit(100000)

def factorial(n):
    # Provide your code here
    if n == 1:
        return 1
    else:
        return(n * factorial(n-1))


def fib(n):
    # Provide your code here
    if n < 0:
        print("Please use number greater or equal to 0")
    if n <= 1:
        return n
    else:
        return(fib(n-1) + fib(n-2))


def equal(A, B):
    # Provide your code here
    if len(A) == 0:
        return 'True'
    if A != B:
        return 'False'
    else:
        return equal(A[:-1], B[:-1])

def addup(list):
    # Provide your code here
    if len(list) == 1:
        return list[0]
    else:
        return addup(list[1:]) + list[0]

def reverse(A):
    # Provide your code here
    if len(A) == 0:
        return A
    else:
        return reverse(A[1:]) + A[0]


print("factorial(5):", factorial(5))
# Expected 120

print("fib(7):", fib(7))
# Expected 13

print("equal('ALICE', 'BOB):", equal('ALICE', 'BOB'))
# Expected False
    
print("equal('ALICE', 'ALICE'):", equal('ALICE', 'ALICE'))
# Expected True

print("addup([1,2,3,4,5]):", addup([1,2,3,4,5]))
# Expected 15
print("addup(range(101)):", addup(range(101)))
# Expected 5050

print("reverse('hello'):", reverse('hello'))
# Expected olleh
