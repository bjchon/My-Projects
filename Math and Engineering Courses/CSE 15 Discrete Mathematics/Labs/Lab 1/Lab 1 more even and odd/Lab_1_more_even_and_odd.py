"""
Bryant Chon
Lab 1 More Even and Odd
"""

Lodd = None
print("Enter 10 integers:")

for _ in range(10):
	num = int(input())
	if (num %2 and (Lodd is None or num > Lodd)):
		Lodd = num

if Lodd:
	print("The largest odd number is ", Lodd)

else:
	print("No odd numbers were entered")


