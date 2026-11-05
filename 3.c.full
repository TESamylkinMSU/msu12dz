#include <stdio.h>
#include <math.h>
double sred_arifm(FILE * f);
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
double sred_kvadrat(FILE * f);
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
