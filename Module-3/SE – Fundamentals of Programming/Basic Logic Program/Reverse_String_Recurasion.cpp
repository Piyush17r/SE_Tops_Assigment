#include <stdio.h>
#include <string.h>

ReverseSentence()
{
    char c;

    scanf("%c", &c);

    if (c != '\n')
    {
        ReverseSentence();
        printf("%c", c);
    }
}

main()
{
    printf("Enter a Sentence : ");
    ReverseSentence();
}
