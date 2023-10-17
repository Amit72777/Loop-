#include <stdio.h>
int main()
{
    int a, c, d, e, f, i;
    printf("Enter the Nth number :");
    scanf("%d", &a);

    // armstrong number means ex-> 153 = (1*1*1) + 5*5*5 + 3*3*3  {LHS EQUAL TO RHS }
    for (i = 1; i <= a; i++)
    {
        f = i;
        e = f;
        d = 0;
        while (f != 0)
        {

            c = f % 10;
            d = d + c * c * c;
            f = f / 10;
        }

        if (d == e)
            printf("\n%d is arstrong number", i);
    }
    return 0;
}