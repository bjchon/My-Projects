from logic import TruthTable

input = input("Please, enter a logic expression: \n\n")
print("\n")

myTable = TruthTable([input])
a = myTable.table

count = 0

for x in range(len(a)):
	if(a[x][1] == [1]):
		count = count+1
	print(a[x])

if(count == len(a)):
	print("\nYour logic expression is a Tautology\n")
	quit()
if(count == 0):
	print("\nYour logic expression is a Contradiction\n")
	quit()
else:
	print("\nYour logic expression is a Contingency\n")
