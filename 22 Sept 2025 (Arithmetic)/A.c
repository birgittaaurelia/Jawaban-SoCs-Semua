#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %*c %d %*c", &a, &b);
  printf("%d\n", a + b);

  scanf("%d %*c %d %*c", &a, &b);
  printf("%d\n", a + b);

  scanf("%d %*c %d %*c", &a, &b);
  printf("%d\n", a + b);
  return 0;
}
