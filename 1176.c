#include <stdio.h>

long long int fibonacci(long long int num); //prototype

long long int fibonacci(long long int num) {//returns fibonacci at position num
  long long int i = 0, tt=0, t1 = 0, t2 = 1;
  for(i;i<num-1;i++)
  {
    tt = t1 + t2;
    t1 = t2;
    t2 = tt;
  }
  return tt;
}

int main() {
  int x;
  scanf("%d", &x);
  int v1[x];
  
 for(int i=0;i<x;i++) //scans values
 {
   scanf("%d", &v1[i]);
 }
 
 for(int j = 0; j<x; j++) //prints results
 {
  if(v1[j] > 1 && v1[j] <= 60){
     printf("Fib(%d) = %lld\n", v1[j], fibonacci(v1[j]));
   }
   else if (v1[j] < 1)
   {
     printf("Fib(%d) = 0\n", v1[j]);
   }
   else if(v1[j] == 1)
   {
     printf("Fib(%d) = 1\n", v1[j]);
   }
   
 }

  return 0;
} 
