#include<stdio.h>
int main()
{
    int swap=0,first ,last ,n,a,rev=0;
    printf("Enter the number :");
    scanf("%d",&n);

    last = n%10;
  
    while (n>10)

    {
        rev   = rev *10+ n%10;
        n/=10; 
    }
    first  = n;
    swap =last;

      while (rev>10)

    {
        swap = swap  *10+ rev%10;
        rev/=10; 
    }

    n= swap*10 + first ;


    printf(" \n %d ",n);



    return 0;
}