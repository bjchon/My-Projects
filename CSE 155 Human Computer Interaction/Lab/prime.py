num = int(input("Please, enter a number:"))
boo = False
if num == 1:
    print(num, "is not a prime number")
elif num > 1:
    for i in range(2, num):
        if (num%i) == 0:
            boo = True
            break

    if boo: 
        print(num, "is not a prime number")
    else:
        print(num, "is a prime number")
