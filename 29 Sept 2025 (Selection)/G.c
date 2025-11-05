#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int t=1; t<=T; t++){
        int a, b;
        scanf("%d %d", &a, &b);

        int flipF = b/2;
        int flipB = (a/2) - (b/2);
        int ans = (flipF<flipB) ? flipF : flipB;

        printf("Case #%d: %d\n", t, ans);

    }
    return 0;
}