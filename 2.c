#include "func.h"

int main(void)
{
    FILE * f = fopen("numbers.txt","r");
    if (f == NULL)
    {
        printf("File error");
        return -1;
    }
    else
    {
        printf("Answer: %lf", find_longest_process(f));
        return 0;
    }
}
