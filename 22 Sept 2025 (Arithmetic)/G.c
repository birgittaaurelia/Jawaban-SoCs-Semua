#include <stdio.h>

int main(){
  double N;

  scanf("%lf", &N);
  double eq = N/2*(2*100 + (N-1)*50);
  printf("%.lf\n", eq);
  return(0);
}