str = input("Enter the string ")
i = 0 
temp = ""
while i<len(str):
    if str[i] not in temp :

        print(f"{str[i]} letter is {str.count(str[i])} times ")
        temp = temp + str[i]
    i+=1