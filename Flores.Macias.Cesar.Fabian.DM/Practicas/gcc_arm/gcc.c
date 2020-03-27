#include <stdio.h>

int main(void)
{
   int i;
   int x;
   printf("Numero base\n");
   scanf("%d, &x);
   for(i=1;i<11;i++)
   {
	x = x + 2;
	printf("+2 es: %d\n" ,x);
   }
 return 0;
}