#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  int T;
  scanf("%d",&T);
  for (int t=1;t<=T;t++){
    int len;
    long long K;
    scanf("%d %lld", &len, &K);

    char string[101];
    scanf("%s", string);

    for (int i=0; i<len; i++){
      long long curr = string[i] - 97 + K;
      if (curr>25){
        curr = curr%26;
      }
      string[i] = (char)(curr+97);
    }
    printf("Case #%d: %s\n", t, string);
  }
  return 0;
}