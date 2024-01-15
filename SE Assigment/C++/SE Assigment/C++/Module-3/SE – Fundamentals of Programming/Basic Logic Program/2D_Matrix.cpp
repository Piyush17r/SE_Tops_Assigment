#include <stdio.h>
main()
{
	int a[2][2], b[2][2], c[2][2], i, j;

	printf("Enter Matrix A \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter A [%d] [%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEnter Matrix B \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter b [%d] [%d] = ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	// Addition of Array //
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\n\n\nAddition of Two Array (A+B) = \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	// Subtraction of Array //
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}

	printf("\n\n\nSubtraction of Two Array (A-B) : \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	// Multiplication of Array //
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}

	printf("\n\n\nMultiplication of Two Array (A*B) : \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}