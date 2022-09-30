#include <stdio.h>
#include "./uri_1113.h"

int main(void)
{
  int a, b;

  do
  {
    scanf("%d %d", &a, &b);
    if (a != b)
    {
      bool result = check_bigger(a, b);
      if (a > b)
        printf("Crescente\n");
      else if (a < b)
        printf("Decrescente\n");
    }
    
  } while (a != b);

  return 0;
}