#include <stdio.h>
double find_longest_process( FILE * f);
double find_longest_process( FILE * f)
{
    int c = 1 , k = 0;
    double vhod=0.0 , prov=0.0 , kfile=0.0 ;
    if (fscanf(f , "%lf", &vhod) != 1)
    {
        printf("File is empty");
        return -1;
    }
    prov = vhod;
    while (fscanf(f , "%lf", &kfile) == 1)
    {
        if (prov == kfile)
        {
            c+=1;
            prov = kfile;
            if (c > k)
            {
                k = c;
            }
        }
        else
        {
            prov = kfile;
            c = 1;
        }
    }
    return k;
}
int main(void)
{
    FILE *f = fopen("numbers","r");
    if (f == NULL)
    {
        printf("File error");
        return -1;
    }
    else {
        printf("Answer: %lf", find_longest_process(f));
        return 0;
    }
}
