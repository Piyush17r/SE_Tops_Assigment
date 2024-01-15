#include <stdio.h>
main()
{
	int a, n, remainder, maximum = 0;

	printf("Enter Number To Find Out The Maximum From Given Number : ");
	scanf("%d", &n);

	while (n != 0)
	{
		remainder = n % 10;

		if (maximum < remainder)
		{
			maximum = remainder;
		}
		n = n / 10;
	}
	printf("\n\n The Maximum Value From Given Number Is = %d", maximum);
}
