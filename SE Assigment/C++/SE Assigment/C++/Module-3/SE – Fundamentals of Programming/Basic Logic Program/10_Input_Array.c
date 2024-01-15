#include <stdio.h>
main()
{
	int a[10], i, sum = 0, ans = 0, even = 0, odd = 0;

	printf("Enter a 10 Input and Find Out.\n\n");
	for (i = 0; i <= 9; i++)
	{
		printf(" Enter Your %d Number = ", i + 1);
		scanf("%d", &a[i]);
	}

	for (i = 0; i <= 9; i++)
	{
		if (a[i] % 2 == 1)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\n\n Total Even Number Out of 10 Input : %d", even);
	printf("\n Total Odd Number Out of 10 Input : %d", odd);

	for (i = 0; i <= 9; i++)
	{
		if (a[i] % 2 == 0)
			sum = sum + a[i];
	}
	printf("\n\n Sum of Even Number = %d", sum);

	for (i = 0; i <= 9; i++)
	{
		if (a[i] % 2 != 0)
			ans = ans + a[i];
	}
	printf("\n Sum of Odd Number = %d", ans);
}