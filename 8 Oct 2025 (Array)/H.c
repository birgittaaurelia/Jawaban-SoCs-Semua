#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    long long A[200005];
    for (int i=0; i<T; i++){
        scanf("%lld", &A[i]);
    }

    int n = 0;
    for (int i=0; i<T; i++){
        int there = 0;
        for (int j=0; j<i; j++){
            if (A[i] == A[j]){
                there = 1;
                break;
            }
        }
        if (!there) n++;
    }
    printf("%d\n", n);
}