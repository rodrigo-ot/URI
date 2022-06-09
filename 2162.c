#include <stdio.h>

int main(void)
{
  int x, ce = 1;
  scanf("%d", &x);
  signed int y[x], v[x];
  if(x > 1 && x <= 100)
  {
    for(int i = 0; i < x; i++)// conversor picos =1 vales =0
      {
        scanf("%d", &y[i]);
            if(i != 0){
              if(y[i] < y[i-1]){
                v[i-1] = 0;
              }
              else if(y[i] > y[i-1])
              {
                v[i-1] = 1;
              }
              else if(y[i] == y[i-1])
              {
                ce = 0;
              }

            }
      }

    for(int j=0; j < x-2; j++) // verificações
      {
            // printf("(%d,%d)\n", v[j], v[j+1]);
            if(ce == 1 && v[j] != v[j+1])
            {
                ce = 1;
            }
            else{ce = 0;}
      }


    printf("%d\n", ce);
  }
}
