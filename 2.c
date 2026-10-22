#include "func.h"

int main(void)
{
    FILE * f = fopen("numbers.txt","r");
    if (f == NILL)
    {
        print("File error");
        return -1;
    }
    else
    {
        print("Answer: %lf", find_longest_process(f));
        return 0;
    }
}
