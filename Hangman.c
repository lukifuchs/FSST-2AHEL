#include <stdio.h>

int main()
{
    const char secret[]="Hallo";
    char guess;

    printf("Welcher buchstabe koennte es sein :");
    scanf(" %c",&guess);
    int hits =0;

    for (int i = 0; i < sizeof(secret)- 1; i++)
    {
        if ((secret[i])==guess)
        {
            hits++;
        }
    }

    printf("Treffer:%d",hits);
    
        
    /*if (guess==secret)
    {
        printf("Treffer das Wort war %c", secret);
    }*/

    /*else
    {
        printf("Schade");
    }*/
    return 0;

}