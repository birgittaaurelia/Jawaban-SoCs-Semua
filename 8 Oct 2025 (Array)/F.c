#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for(int t=1; t<=T; t++){
        long long A, B;
        scanf("%lld %lld", &A, &B);

        long long result = 0, place = 1;
        while (A > 0 || B > 0){
            int a = A % 10;
            int b = B % 10;
            int total = (a+b) % 10;
            result += total * place;
            place *= 10;
            A /= 10;   
            B /= 10;
        }
        printf("Case #%d: %lld\n", t, result);
    }  
}