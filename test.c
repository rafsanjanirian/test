#include <stdio.h>
int main()
{
  int x, y, z;

  printf("Enter two numbers to add\n");
  scanf("%d%d", &x, &y);

  z = x + y;

  printf("Sum of %d and %d is = %d\n",x,y,z);

  return 0;
}
