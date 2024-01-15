#include <stdio.h>
main()
{
	int a, b;

	printf("Enter A = ");
	scanf("%d", &a);
	printf("Enter B = ");
	scanf("%d", &b);

	a = a * b; // a=10,b=20	//a=200 (10*20)
	b = a / b; // b=10 (200/20)
	a = a / b; // a=20 (200/10)

	printf("\n After Swap : \n A=%d B=%d", a, b);
}