#include <stdio.h>

int main()
{
    const char secret='x';
    const char  guess='y';
    
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