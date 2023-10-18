#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the number ");
    scanf("%d", &num);
    i = 0;
    while (num != 0)
    {
        num = num / 10;
        i++;
    }
    printf("the digit is : %ld", i);
    return 0;
}