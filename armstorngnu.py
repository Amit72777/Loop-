print("Check wheather the Number is armstrong number or not ")

num = int(input("Enter the Number "))
e = num 
d =0 
while (num>0):
    c = num%10
    d = d + c*c*c
    num//=10

if d == e :
    print("This is armstrong number  ")
else :
    print("This is not armstrong number :")
