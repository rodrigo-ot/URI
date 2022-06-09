#include <stdio.h>
int main(void) {
  int n;
  scanf("%d", &n);
  int x[n], menor=1000, menorpos;
  for(int i =0;i<n;i++)
    {
      scanf("%d",&x[i]);
      if(x[i] < menor){
        menor = x[i];
        menorpos = i;
      }
    }
  printf("Menor valor: %d\nPosicao: %d\n", menor, menorpos);
}
