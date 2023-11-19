#include <stdio.h>
int main()
{
    int n, a, i;
    a = 0;
    printf("Enter the number :");
    scanf("%d", &n);

    for (i = 1; i <= n/2+1; i++)
    {
        if (n % i == 0)
            a++;
        if (a == 3)
            break;
        
    }
    if (a == 2)
        printf("this is prime number ");
    else
        printf("this is not prime number ");

    return 0;
}
