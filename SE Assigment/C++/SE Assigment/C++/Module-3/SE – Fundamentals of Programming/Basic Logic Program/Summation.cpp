#include <stdio.h>
main()
{
	int a, b, c, sum = 0;

	printf("Enter a number : ");
	scanf("%d", &b);

	while (b > 0)
	{
		c = b % 10;
		sum = sum + c; // sum+=c; //
		b = b / 10;
	}

	printf("\n Sum is = %d", sum);

	// second method //
	//	printf("Enter a Number to Give Summation of All Number. =  ");
	//	scanf("%d",&c);
	//
	//	for(a=1; a<=c; ++a)
	//
	//	{
	//		printf("Enter %d : ",a);
	//		scanf("%d",&b);
	//
	//		sum = sum + b;
	//	}
	//
	//	printf("\n Total Sum of All numbers = %d",sum);
}
