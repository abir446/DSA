#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    printf("Enter a string: ");
    fflush(stdin);
    fgets(str,50,stdin);

    int i,j;

    char t;


    for (j=0;str[j]!='\0';j++)
    {

    }

    j-=1;

    for (i=0;i<j;i++)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        j--;
    }


    puts(str);

    return 0;
}
