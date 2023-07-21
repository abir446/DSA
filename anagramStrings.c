#include <stdio.h>
#include <string.h>

int main()
{
    char n1[30],n2[30];
    printf("Enter first name: ");
    fflush(stdin);
    fgets(n1,20,stdin);

    printf("Enter first name: ");
    fgets(n2, 20, stdin);

    int hash[26]={0};

    for (int i=0;n1[i]!='\0';i++)
    {
        hash[n1[i]-97]++;
    }
    int i=0;
    for (i=0;n2[i]!='\0';i++)
    {
        hash[n2[i]-97]--;
        if (hash[n2[i]-97]<0)
        {
            printf("The names are not anagram.");
            break;
        }
    }
    if (n2[i]=='\0')
        printf("The two names are anagram.");



    return 0;
}
