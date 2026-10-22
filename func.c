#include <math.h>
#include "func.h"
double find_longest_process(FILE * f)
{
  int c = 1, k = 0;
  double vhod=0.0, kfile=0.0;
  if (fscanf(f,"%lf",&vhod) != 1)
  {
    printf("File is empty");
    return -1;
  }
  while (fscanf(f,"%lf",&kfile) == 1)
  {
    if (fabs(vhod - kfile)<eps)
    {
      c+=1;
      vhod=kfile;
    }
    else 
    {
      if (c>1)
      {
        k+=c;
      }
      vhod = kfile;
      c = 1;
    }
  }
  return k;
}

