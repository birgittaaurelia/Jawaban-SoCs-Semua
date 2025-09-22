#include <stdio.h>

int equation(int x, int y, int z, int f) {
  double a = x/1;
  double b = y/2;
  double c = z/3;
  double d = f/4;

  double res1 = a + b + c + d;
  double res2 = b + c + d + c;
  double res3 = c + d + c + b;
  double res4 = d + c + b + a;

  double total = res1 + res2 + res3 + res4;
  return(total);
}

int main() {
  int x,y,z,f;
  double res;

  for(int i=1; i<=3; i++){
    scanf("%d %d %d %d", &x, &y, &z, &f);
    res = equation(x,y,z,f);
    printf("%.2lf\n", res);
  }

  return(0);
}