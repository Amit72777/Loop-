#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter the 1st number :");
    scanf("%d", &a);
    printf("Enter the 1st number :");
    scanf("%d", &b);

    i = 1;
    int n = 1;
    while (i <= b)
    {
        n = a * n;
        i++;
    }
    printf("the value 1st number raised to the power of another :%d", n);
    return 0;
}