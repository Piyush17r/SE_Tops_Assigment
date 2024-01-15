#include <stdio.h>
int fact(int a)
{
	int i, ans = 1;

	for (i = a; i > 1; i--)
	{
		ans = ans * i;
	}

	//	if(a == 1)
	//	{
	//		return 1;
	//	}
	//	else
	//	{
	//		ans = a* fact(a-1);
	//	}
}

main()
{
	int n;
	printf("\n Enter Number to Find Factorial : ");
	scanf("%d", &n);

	printf("\n Factorial = %d", fact(n));
}