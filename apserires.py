a = int(input("Enter the First number :"))  # input first number 
d = int(input("Enter the comon difference :")) # input common difference 
nth = int(input("Enter the number of term :"))# input the number of term 

for  i in range(a,nth+1):   
    print(a,end = "," )  # print the series 
    a+=d