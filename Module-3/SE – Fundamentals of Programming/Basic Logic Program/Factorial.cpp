#include <stdio.h>
main()
//{
//	int a,b,factorial=1;
//
//	printf("Enter A Number To Find Factorial : ");
//	scanf("%d",&a);
//
//	for(b=1; b<=a; b++)
//
//	factorial = factorial * b;
//	printf("Factorial of %d is = %d",a,factorial);

{
	double a, b, factorial = 1;

	printf("Enter A Number To Find Factorial : ");
	scanf("%lf", &a);

	for (b = 1; b <= a; b++)

		factorial = factorial * b;
	printf("Factorial of %lf is = %lf", a, factorial);
}
