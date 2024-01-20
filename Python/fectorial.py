num=int (input("enter a number : "))
fact = 1
for i  in range(2,(num+1)):
    fact=fact*i
print("The factorial of the number : ",num," is : ",fact)