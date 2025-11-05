#include <stdio.h>

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int k = c - a;
  int j = b - c;

  if (k == j && k >= 0) printf("%d\n", k);
  else printf("-1\n");
}