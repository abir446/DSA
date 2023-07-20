#include<string.h>
#include<stdio.h>

int main()
{

    char name[30];
    printf("Enter your name in small letter: ");
    scanf("%s",name);

    for (int i=0;name[i]!='\0';i++)
    {
        if (name[i]>='a' && name[i]<='z')
            name[i]-=32;
    }
    puts(name);



    return 0;
}
