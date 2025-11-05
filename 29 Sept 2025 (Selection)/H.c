#include <stdio.h>
#include <stdlib.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int t=1; t<=T; t++){
        int max;
        scanf("%d", &max);

        int a, b, min;
        scanf("%d %d", &a, &b);
        min = abs(a-b);
        a = b; //move position
        for (int i=2; i<max; i++){
            scanf("%d", &b);
            int temp = abs(a-b);
            if (temp<min) min=temp;
            a = b;
        }
        printf("Case #%d: %d\n", t, min);
    }
    return 0;
}