#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];
    fflush(stdin);
    fgets(sentence,80,stdin);

    int words=1;

    for (int i=0;sentence[i]!='\0';i++)
    {
        if (sentence[i]==' ' && sentence[i-1]!=' ')
            words++;
    }
    printf("The number of words in the string: %d",words);

    return 0;
}
