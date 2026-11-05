#include "func1.h"

double sred_kvadrat(FILE * f)
{

    int n=1;
    double per=0.0, vtor=0.0, sum=0.0,D=0.0;
    if (fscanf(f,"%lf",&per)!=1)
    {
        printf("File empty\n");
        return -1;
    }
    sum+=(per-sred_arifm(f))*(per-sred_arifm(f));
    while (fscanf(f,"%lf",&vtor)==1)
    {
        n+=1;
        sum+=(vtor-sred_arifm(f))*(vtor-sred_arifm(f));
    }
    D=sum/n;
    return D;
}
