# take input of two number and Calculate the HCF 

a = int(input('Ente the first number '))
b = int(input("Enter the second nubmer :"))
l1 = []
for i in  range(1,a//2+1 or b//2+1):
    if( a%i== 0 and b%i == 0 ):
        l1.append(i)


print(l1)
