#include <stdio.h>
int main()
{
    int i, fact, n;
    printf("Enter the number ");
    scanf("%d", &n);
    printf("lsit the number of factorial 1to nth term = \n");

    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("\n %d!=%d", i, fact);
    }
    //   printf("\n The factorial is : %d",fact );
    return 0;
}