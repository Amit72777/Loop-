#include<stdio.h>
int main()
{
    int n,a,b,m;
    printf("\n++++++++++++++++++++++++++++++++++++\n Calculate the HCF of two number \n ++++++++++++++++++++++++++++++++\n ");
    printf("Enter the  both number :");
    scanf("%d%d",&n,&m);

    for(int i = 1;i<= n/2+1|| i<= m/2+1;i++)
    {
        if(n%i==0 && m%i ==0)
        printf("%d, ",i);
    }
    

    return 0;
}