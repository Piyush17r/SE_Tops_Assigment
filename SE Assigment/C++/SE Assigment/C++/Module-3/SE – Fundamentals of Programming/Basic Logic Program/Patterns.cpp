#include <stdio.h>
main()
{
	int a, b, c = 1;
	char ch = 'A';

	for (a = 1; a <= 5; a++) // 1 //
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d ", b % 2);
		}
		printf("\n");
	}
	printf("\n\n\n");

	for (a = 1; a <= 5; a++) // 2 //
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d ", c++);
		}
		printf("\n");
	}
	printf("\n\n\n");

	for (a = 1; a <= 5; a++) // 3 //
	{
		for (b = 1; b <= a; b++)
		{
			printf("%c ", ch++);
		}
		printf("\n");
	}
	printf("\n\n\n");

	for (a = 1; a <= 5; a++) // 4 //
	{
		for (b = 1; b <= a; b++)
		{
			printf("%c ", b + 64);
		}
		printf("\n");
	}
	printf("\n\n\n");

	for (a = 1; a <= 9; a++) // 5 //
	{
		for (c = 9; c >= a; c--)
		{
			printf(" ");
		}
		for (b = 1; b <= a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\n\n");

	for (a = 1; a <= 6; a++) // 6 //
	{
		for (b = 1; b <= a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (a = 5; a >= 1; a--)
	{
		for (b = 1; b <= a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n\n\n");
}
