#include <stdio.h>
#include <stdlib.h>

int strlen(char*wort)
{  
    int sz=0;
     for (; wort[sz]!='\0'; sz++)
{
    
}
    return sz;
}

void dump(char*wort)
{
    for (int i = 0; wort[i] !='\0'; i++)
    {
        printf("%c ",wort[i]);
       
    }
    printf("\n");
    
    
}

char* init(int sz, char c)
{
    char*wort=malloc(sz+1);
    for(int i =0; i<sz ; i++)
        {
            wort[i]=c;
        }
        wort[sz]='\0';
        return wort;
}

int check(char*wort,char*wort2,char c)
{
    for(int i=0;wort[i] !='\0'; i++)
    {
        if(wort[i]==c)
        {
            wort2[i]=c;
        }

    }
    
    if(strlen(wort)!=strlen(wort2)||strlen(wort)==0)
    {
        return -1;
    }
    return 0;
}



int is_upper(char c)
{
    return c >= 'A' && c <= 'Z';
    
}

int is_lower(char c)
{
    return c >= 'a' && c <= 'z';


}

char normalise(char c)
{
    if(!is_upper(c)&&!is_lower(c))// !is_upper(c)||!is_lower(c) -> de Morgan
        return -1;

    return c+('a'-'A');
}

int main()
{

    char*wort="WORT";
    char*wort2=init(strlen(wort),'?');
   
    dump(wort2);
    check(wort,wort2,'O');
    dump(wort2);
    free(wort2);

    is_upper('O');

    


    return 0;
}