#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(0));
  int x[10];
  for(int i=0;i<10;i++)
  {
    x[i]=rand()%100;
      printf("x[%d] = %d\n",i,x[i]);
  }
}
