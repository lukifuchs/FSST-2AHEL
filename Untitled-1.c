#include <stdio.h>
#include <stdlib.h>

int strlen(char*Wort)
{  
    int sz=0;
     for (; Wort[sz]!='\0'; sz++)
{
    ;
    return sz;
}
    return 0;
}

void dump(char*Wort)
{
    for (int i = 0; Wort[i] !='\0'; i++)
    {
        printf("%c ",Wort[i]);
        //printf("\n");
    }
    
    
}

char* init(int sz, char c)
{
    char*Wort=malloc(sz+1);
    for(int i=0; i<sz ;i++)
        {
            Wort[i]=c;
        }
        //Wort[sz]='\0';
        return Wort;
}

int main(int argc, char*argv[])
{

    char*Wort="WORT";
    char*Wort2=init(strlen(Wort),'_');
   
    dump(Wort2);

    return 0;
}