from logic import TruthTable
print('Lab Examples:\n')
myTable = TruthTable(['p', 'q'], ['p or q'])
myTable.display()
print('\n')
myTable.latex()
print('\n')
myTable = TruthTable(['p', 'q'], ['p or q', 'p and q'])
myTable.display()
print('\n')

print('My Code\n')
myTable = TruthTable(['a', 'b'], ['a and -b'])
myTable.display()
print('\n')

myTable = TruthTable(['a', 'b', 'c'], ['(a and b) or -c'])
myTable.display()
print('\n')

myTable = TruthTable(['p', 'q'], ['((p -> q) and p) -> q'])
myTable.display()
print('\n')

myTable = TruthTable(['p', 'q'], ['(-q and (p -> q)) -> -p'])
myTable.display()
print('\n')

myTable = TruthTable(['p', 'q', 'r'], ['((p -> q) and (q -> r)) -> (p -> r)'])
myTable.display()
print('\n')

myTable = TruthTable(['p', 'q'], ['((p or q) and - p) -> q'])
myTable.display()
print('\n')

myTable = TruthTable(['p', 'q'], ['p -> (p or q)'])
myTable.display()
print('\n')

myTable = TruthTable(['p', 'q'], ['(p and q) -> p'])
myTable.display()
print('\n')

myTable = TruthTable(['p', 'q'], ['((p) and (q)) -> (p and q)'])
myTable.display()
print('\n')

myTable = TruthTable(['p', 'q', 'r'], ['((p or q) and (-p or r)) -> (q or r)'])
myTable.display()
print('\n')