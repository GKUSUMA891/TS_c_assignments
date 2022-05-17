
~
~
~
~

~
~
~
~
~
~
~
~

~
~
~
~
#include <stdio.h>
int main()
{
  int n, i,j;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (j= 1; j <= n; j++)
  {
    for (i = 1; i <= n-j; i++)
    {
      printf(" ");
    }

    for (i= 1; i <= 2*j-1; i++)
    {
      printf("*");
    }

    printf("\n");
  }

  for (j= 1; j<= n - 1; j++)
  {
    for (i= 1; i <= j; i++)
    {
      printf(" ");
    }

    for (i = 1 ; i <= 2*(n-j)-1; i++)
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}



