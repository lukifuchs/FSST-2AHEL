#include<stdio.h>
//ladet die libary Zeit bracuhen wir wegen randomizer
#include<time.h> 
// ladet die standart libary
#include<stdlib.h> 

int main()
{
    //randomized
    srand(time(NULL));
    //gibt den Zahlenbereich an 
    int gesuchteZahl= rand()%10+1;
    
    int a = 0;

    int versuche = 0;
    int max_versuche=5;
    //while + abbruchbediingung
    while(versuche < max_versuche) 
    {
            printf("Gibt deine Zahl ein: ");
            scanf("%d",&a);

            if (a==gesuchteZahl)
        {
                printf("Richtig!");
                return 0;           
        }
            else if (a<gesuchteZahl)
        {
                printf("Schade, die Zahl  ist leider zu klein als die gesuchte\n"); 
                versuche+=1;             
        }
            else if (a>gesuchteZahl)
        {
                printf("Schade, die Zahl  ist leider zu gross als die gesuchte\n");
                versuche+=1;     
        }
    }
            return 0;
}