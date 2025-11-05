#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  for (int t=1; t<=T; t++){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int disc = a*b/100;
    if (disc < c) printf("Case #%d: %d\n", t, disc);
    else printf("Case #%d: %d\n", t, c);
  }
  return 0;
}