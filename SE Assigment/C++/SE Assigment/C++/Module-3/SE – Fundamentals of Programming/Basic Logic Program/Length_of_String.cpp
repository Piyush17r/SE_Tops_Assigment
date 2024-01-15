#include <stdio.h>
#include <string.h>
main()
{
	char a[100];
	int b, c;

	printf("Enter a String To Find Length of String : ");
	gets(a);

	for (c = 0; a[b] != '\0'; c++) // without In-Bulit Function //
	{
		b++;
	}

	//    b = strlen(a);							// With In-Bulit Function //

	printf("\n Length of String = %d", b);
}
