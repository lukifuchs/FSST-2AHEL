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
    int Zahlenbereich=100;
    int gesuchteZahl= rand()%Zahlenbereich+1;
    
    int a = 0;

    int versuche = 0;
    int max_versuche=5;
    //while + abbruchbedingung
    while(versuche < max_versuche) 
    {
            printf("Gibt deine Zahl ein: ");
            scanf("%d",&a);
                
                if (a == -10) 
        {
                printf("%d", gesuchteZahl);
        }
                
                else if (a==gesuchteZahl)
        {
                printf("Richtig!");
                return 0;           
        }
                
                else if (a<gesuchteZahl)
        {
                printf("Na pfui schlechter geht echt nicht, die Zahl kleiner als die gesuchte du Opfer !\n"); 
                versuche+=1;             
        }
                
                else if (a>gesuchteZahl)
        {
                printf("Bist du deppert wie achlwcht kann man sein, die Zahl ist groesser als die gesuchte du Opfer !\n");
                versuche+=1;     
        }
    }
            return 0;
}