#include <stdio.h>

int main() {
  int A, B;
  float dis;

  scanf("%d %d", &A, &B);
  dis = (float)(A-B)/(float)A * 100;
  printf("%.2f%%\n", dis);
  return (0);
}
