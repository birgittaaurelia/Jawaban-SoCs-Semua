#include <stdio.h>

int main(){
  double x, y, z;
  scanf("%lf %lf %lf", &x,&y,&z);

  double total = 0.2*x + 0.3*y + 0.5*z;
  printf("%.2lf\n", total);
}