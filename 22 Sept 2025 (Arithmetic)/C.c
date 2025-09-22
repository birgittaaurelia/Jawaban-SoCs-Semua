#include <stdio.h>

int main() {
  double x,y;

  scanf("%lf %lf", &x, &y);
  double first = x + x*y/100;
  double second = first + first*y/100;
  double third = second + second*y/100;

  printf("%.2lf\n", third);
  return (0);

}