#include <stdio.h>
main()
{
	int a[5], b, maximum, minimum;

	for (b = 0; b <= 4; b++)
	{
		printf(" Enter Your %d Number : ", b + 1);
		scanf("%d", &b[a]);
	}

	maximum = a[0];
	for (b = 1; b <= 4; b++)
	{
		if (maximum < a[b])
		{
			maximum = a[b];
		}
	}
	printf("\n Maximum Number = %d", maximum);
}