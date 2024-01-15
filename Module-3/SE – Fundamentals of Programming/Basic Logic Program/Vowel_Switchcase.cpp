#include <stdio.h>
main()
{
	int character;

	printf("Enter Any Alphabet To Find That's Vowel Or Constant. : ");
	scanf("%c", &character);

	switch (character)
	{
	case 'a':
		printf("\nThis Character is Vowel.");
		break;
	case 'A':
		printf("\nThis Character is Vowel.");
		break;

	case 'e':
		printf("\nThis Character is Vowel.");
		break;
	case 'E':
		printf("\nThis Character is Vowel.");
		break;

	case 'i':
		printf("\nThis Character is Vowel.");
		break;
	case 'I':
		printf("\nThis Character is Vowel.");
		break;

	case 'o':
		printf("\nThis Character is Vowel.");
		break;
	case 'O':
		printf("\nThis Character is Vowel.");
		break;

	case 'u':
		printf("\nThis Character is Vowel.");
		break;
	case 'U':
		printf("\nThis Character is Vowel.");
		break;

	default:
		printf("\nThis character is Consonant.");
	}
}