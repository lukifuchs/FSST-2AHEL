#include <stdio.h>

int countHits (const char secret[],const char guess)
{
    int hits =0;
    for (int i = 0; i <size(secret)-1; i++)
    {
       if ((secret[i])==guess)
       {
            hits++;
       }
    }
    return hits;
}


int main()
{
    const char secret[]="Hallo";
    const guess;
    const int len= sizeof(secret)- 1;
    char guessed[len];
    char buchstabenanzahl='_' ;

    for (int i = 0; i <len ; i++)
    {
        guessed[i]='_';
    }


    printf("Welcher buchstabe koennte es sein :");
    scanf(" %c",&guess);
    int hits =0;

    for (int i = 0; i <len ; i++)
    {
        if (secret[i]==guess)
        {
            hits++;
            guessed[i]=guess;
        }

    }

    /*printf("Treffer! %d\n",hits);
     
    for (int i = 0; i <len ; i++)
    {
        printf("%c",guessed[i]);


    }*/
    
    int hits = countHits;
    return 0;

}