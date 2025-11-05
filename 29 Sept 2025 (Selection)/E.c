#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  for (int t=1; t<=T; t++){
    int empt, max, curr;
    scanf("%d %d", &empt, &max);

    curr = empt;

    while (empt >= max){
      curr += empt/max;
      empt = empt/max + empt%max;
    }

    printf("Case #%d: %d\n", t, curr);
  }
  return 0;
}