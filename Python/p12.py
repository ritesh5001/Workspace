'''
ladder
greatest among 3
'''

a=int(input("Enter the first number : "))
b=int(input("Enter the second number : "))
c=int(input("Enter the third number : "))

if a>b and a>c:
 print(a," is the greatest ")
elif b>c and b>a:
 print(b," is the greatest ")
else:
 print(c," is the greatest ")