#include <stdio.h>

int main()
{
    const char secret='x';
    char  guess=
    printf("Welcher buchstabe koennte es sein ?:");
    scanf("%c",&guess);
    
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