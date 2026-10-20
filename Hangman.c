#include <stdio.h>

int main()
{
    const char secret='x';
    char  guess;

    printf("Welcher buchstabe koennte es sein :");
    if (scanf(" %c",&guess) !=1)
    {
        printf("Ungueldige Eingabe\n");
        return 1;
    }
    
    
    if (guess==secret)
    {
        printf("Treffer der Buchstabe war %c", secret);
    }

    else
    {
        printf("Schade");
    }
    return 0;

}