#include <stdio.h>
main()
{
	int a[5], i, j, n, Ascending, Descending;

	printf("Enter Array A = \n");
	for (i = 0; i <= 4; i++)
	{
		printf(" A (%d) = ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("\n Enter a Number (1 for Ascending) or (2 for Descending) : ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:
		for (i = 0; i <= 4; i++)
		{
			for (j = 0; j <= 4; j++)
			{
				if (a[j] > a[i])
				{
					Ascending = a[i];
					a[i] = a[j];
					a[j] = Ascending;
				}
			}
		}
		printf("\n Ascending Order : ");
		for (i = 0; i < 5; i++)
		{
			printf(" %d ", a[i]);
		}
		break;

	case 2:
		for (i = 0; i <= 4; i++)
		{
			for (j = 0; j <= 4; j++)
			{
				if (a[j] < a[i])
				{
					Descending = a[i];
					a[i] = a[j];
					a[j] = Descending;
				}
			}
		}
		printf("\n Descending Order : ");
		for (i = 0; i < 5; i++)
		{
			printf(" %d ", a[i]);
		}
		break;

	default:
		printf("\n Sorry... \nYou Have Enter Invalid  Input.");
	}
}