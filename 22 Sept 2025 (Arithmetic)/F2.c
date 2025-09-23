#include <stdio.h>

int main() {
  double a,b,c,d;
  double res[3];

  scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
  a = a/1;
  b = b/2;
  c = c/3;
  d = d/4;

  double res1 = a + b + c + d;
  double res2 = b + c + d + c;
  double res3 = c + d + c + b;
  double res4 = d + c + b + a;
  res[0] = res1 + res2 + res3 + res4;

  scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
  a = a/1;
  b = b/2;
  c = c/3;
  d = d/4;

  res1 = a + b + c + d;
  res2 = b + c + d + c;
  res3 = c + d + c + b;
  res4 = d + c + b + a;
  res[1] = res1 + res2 + res3 + res4;

  scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
  a = a/1;
  b = b/2;
  c = c/3;
  d = d/4;

  res1 = a + b + c + d;
  res2 = b + c + d + c;
  res3 = c + d + c + b;
  res4 = d + c + b + a;
  res[2] = res1 + res2 + res3 + res4;

  printf("%.2lf\n", res[0]);
  printf("%.2lf\n", res[1]);
  printf("%.2lf\n", res[2]);
  return(0);
}