#include <stdio.h>
main()
{
	int a;

	printf("Enter a Number(1 to 7) To Find Days : ");
	scanf("%d", &a);

	switch (a)
	{
	case 1:
		printf("\nThis is Sunday!!");
		break;

	case 2:
		printf("\nThis is SMonday!!");
		break;

	case 3:
		printf("\nThis is Tuesday!!");
		break;

	case 4:
		printf("\nThis is Wednesday!!");
		break;

	case 5:
		printf("\nThis is Thursday!!");
		break;

	case 6:
		printf("\nThis is Friday!!");
		break;

	case 7:
		printf("\nThis is Saturday!!");
		break;

	default:
		printf("\nSorry!!! \nYou Have Enter Invalid Input!!");
	}
}