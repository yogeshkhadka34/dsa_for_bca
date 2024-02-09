#include <stdio.h>
int main()
{
   int a=4, b=5, c;
   printf("Enter C: ");
   scanf("%d", &c);
   printf("\nThe Largest Number is: ");
   
   	if ( a>b && a>c)
		printf("%d", a);
	
	else if ( b>a && b>c)
		printf("%d", b);
		
	else
		printf("%d", c);
		
   return 0;
}
