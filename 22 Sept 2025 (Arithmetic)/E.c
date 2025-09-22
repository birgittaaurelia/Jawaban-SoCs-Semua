#include <stdio.h>

int main() {
  float A, B;
  scanf("%f %f", &A, &B);

  float res = B / A * 100;
  printf("%.4f%%\n", res);

}