#include <math.h>
#include "func1.h"

double sred_arifm(FILE * f)
{
    int n=1;
    double per=0.0, vtor=0.0, sum=0.0,M=0.0;
    if (fscanf(f,"%lf",&per) != 1)
    {
        printf("File empty\n");
        return -1;
    }
    sum+=per;
    while (fscanf(f,"%lf",&vtor) == 1)
    {
        n+=1;
        sum+=vtor;
    }
    M=sum/n;
    return M;
}
