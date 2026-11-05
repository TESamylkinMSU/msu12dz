#include "func1.h"

int main(void)
{
    FILE * f= fopen("numbers","r");
    if (f == NULL)
    {
        printf("Error opening file");
        return -1;
    }
    else
    {
        printf("Answer : %lf",sred_kvadrat(f));
        return 0;
    }
}
