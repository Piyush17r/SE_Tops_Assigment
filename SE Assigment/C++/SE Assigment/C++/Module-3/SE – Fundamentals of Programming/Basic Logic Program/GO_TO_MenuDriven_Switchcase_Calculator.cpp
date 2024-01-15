#include <stdio.h>
main()
{
	int a, b, c, e, ans;
	char n;
	char z = '%';

	printf("Select A Symbol to Perform.");
Again:
	printf("\n\n+. Click This Symbol To Addition a Three Number.\n-. Click This Symbol To Subtraction a Three Number.\n*. Click This Symbol To Multiplication a Three Number.\n/. Click This Symbol To Divided a Three Number.\n%c. Click This Symbol To Modular a Three Number.", z);
	fflush(stdin);
	printf("\n\nEnter a Symbol Which You Have to Select. : ");
	scanf("%c", &n);

	printf("\nEnter A : ");
	scanf("%d", &a);
	printf("Enter B : ");
	scanf("%d", &b);
	printf("Enter C : ");
	scanf("%d", &c);

	switch (n)
	{
	case '+':
		ans = a + b + c;
		printf("\nAddition = %d", ans);
		break;

	case '-':
		ans = a - b - c;
		printf("\nSubstraction = %d", ans);
		break;

	case '*':
		ans = a * b * c;
		printf("\nMultiplication = %d", ans);
		break;

	case '/':
		ans = a / b / c;
		printf("\nDivision = %d", ans);
		break;

	case '%':
		ans = a % b % c;
		printf("\nModular = %d", ans);
		break;

	default:
		printf("\nSorry!!! \nYou Have Enter Invalid Input!!!");
	}

	printf("\n\n\nDo You Want to Perform Another Operation??? (y/n): ");
	fflush(stdin);
	scanf("%c", &e);
	if (e == 'y')
	{
		goto Again;
	}
}