#include<stdio.h>
#include<time.h>    //
#include<stdlib.h> //

int main()
{
    srand(time(NULL));

    int gesuchteZahl= rand()%10+1;
    int a = 0;


    int versuche = 0;
    int max_versuche=5;

    while(versuche < max_versuche) 
    {
        printf("Gibt eine Zahl ein:");
        scanf("%d",&a);

            if (a==gesuchteZahl)
    {
                printf("Richtig!");
                return 0;
                
    }
            else if (a<gesuchteZahl)
    {
                printf("Schade, die Zahl  ist leider zu klein als die geschuhte\n"); 
                versuche+=1;
              
                
    }
            else if (a>gesuchteZahl)
    {
                printf("Schade, die Zahl  ist leider zu gross als die geschuhte\n");
                versuche+=1;
                 
               



       
    }

}
    

    
return 0;
}