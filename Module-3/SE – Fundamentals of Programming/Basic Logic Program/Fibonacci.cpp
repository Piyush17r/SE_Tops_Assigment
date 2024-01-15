#include <stdio.h>
main()
{
	int a = 0, b = 1, c, d, e;

	printf("Fibonacci Series up to Given Numbers : ");
	scanf("%d", &e);

	printf(" %d %d", a, b);

	for (d = 3; d <= e; d++)
	{
		c = a + b;
		printf(" %d ", c);
		a = b;
		b = c;
	}
}