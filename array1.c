#include <stdio.h>
int main()
{
    int a[5]; // Declaration
    int b[10] = {2,4,6,8,10}; // Initialisation
    for ( int i = 0; i < 5; i++)
    {
        printf("%d\n",b[i]);// Accessing array
    }
    int s = sizeof(b);
    printf("Size of b array: %d\n",s);

    return 0;
}