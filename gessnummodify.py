import random
gessnumber= random.randint(0,100)  # import random nubmer 

i = 0
a = False  

while a == False :
    num = int(input("Enter the number between 0 to 100 ")) # input the number 

    if(num<gessnumber):
        print("Too low !!")
    elif ( num > gessnumber):
        print("Too High !!")
    else :
        print("Your Win ! YOur gussed number is correct   ")
        a = True
    i+=1

print("Your choose right answer  in {} times ".format(i)) 