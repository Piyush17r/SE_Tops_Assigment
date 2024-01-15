#include <stdio.h>
main()
{
	int n, i;

	printf("\n Enter a Number for Table : ");
	scanf("%d", &n);

	for (i = 1; i <= 10; i++)
	{
		printf("\n %d * %d = %d", n, i, i * n);
	}
	printf("\n");

	for (i = 10; i >= 1; i--)
	{
		printf("\n %d * %d = %d", n, i, n * i);
	}
}