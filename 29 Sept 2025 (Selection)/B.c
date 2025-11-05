#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  for (int t=1; t<=T; t++){
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    printf("Case #%d: ", t);
    for (int i=0; i<a; i++) printf("a");
    for (int i=0; i<b; i++) printf("s");
    for (int i=0; i<c; i++) printf("h");
    for (int i=0; i<d; i++) printf("i");
    for (int i=0; i<e; i++) printf("a");
    for (int i=0; i<f; i++) printf("p");
    printf("\n");
  }
}