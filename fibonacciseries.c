#include <stdio.h>
int main()
{
    int a, b, sum, n, i;
    printf("Enter the first term of series  ");
    scanf("%d", &a);
    printf("Enter the number of term in series : ");
    scanf("%d", &n);

    // fabonacci series
    b = a;
    i = 1;

    if (n == 1)
        printf("\n%d", a);
    else if (n == 2)
        printf("%d,%d", a, b);
    else
    {
        printf("%d,%d,", a, b);

        while (i < n - 1)
        {

            sum = a + b;
            printf("%d,", sum);
            a = b;
            b = sum;
            i++;
        }
    }
    return 0;
}