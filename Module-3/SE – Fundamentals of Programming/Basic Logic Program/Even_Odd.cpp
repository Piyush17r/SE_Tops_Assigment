#include <stdio.h>
main()
{
	int a;

	printf("\nEnter A Number To Find (Even/Odd) : ");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("\n\nYou Enter Number is Even = %d", a);
	}
	else
	{
		printf("\n\nYou Enter Number is Odd = %d", a);
	}

	//	(a % 2 == 0) ? printf("\n You Enter Number is even. = %d", a) : printf("\n You Enter Number is odd. = %d", a);  //
}