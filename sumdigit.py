num = input("Enter the digit :") # input the number is string type 
a = len(num) # find length of input string 
sum = 0 
for i in range(a):
    sum += int(num[i]) # Sum of the input digit & string number convert in interger type cast

print(sum)