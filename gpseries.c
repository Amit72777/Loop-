#include <stdio.h>
int main()

{
  float a, r, i, N;
  printf("enter First term ");
  scanf("%f", &a);
  printf("enter the common difference  ");
  scanf("%f", &r);
  printf("enter the   number of term ");
  scanf("%f", &N);

  for (i = 1; i <= N; i++)
  {

    printf("%f\t ", a);
    a = a * r;
  }

  return 0;
}