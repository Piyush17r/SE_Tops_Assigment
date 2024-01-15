#include <stdio.h>
#include <string.h>
main()
{
   char inputArray[100], reversedArray[100];

   printf("Enter The String to Check String is Palindrome or Not. : ");
   scanf("%s", &inputArray);

   strcpy(reversedArray, inputArray);

   strrev(reversedArray);

   if (strcmp(inputArray, reversedArray) == 0)
   {
      printf("\n You Enter String is a Palindrome.\n String = %s", inputArray);
   }
   else
   {
      printf("\n You Enter String is Not Palindrome.\n String = %s", inputArray);
   }
}