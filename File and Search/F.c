#include <stdio.h>

int min(int a, int b){
    if (a<b) return a;
    return b;
}

int main(){
    FILE *fp = fopen("testdata.in", "r");

    int T;
    fscanf(fp, "%d\n", &T);
    for (int t=1; t<=T; t++){
        int area = 0;
        int peri = 0;

        int bef = 0;
        int aft = 0;

        int a;
        fscanf(fp, "%d\n", &a);

        for (int i=0; i<a; i++){
            bef = aft;
            fscanf(fp, "%d", &aft);

            area += 2 * 2 * aft;

            peri += 4 * 2 * aft;
            peri -= 4 * (aft - 1);
            peri -= min(aft, bef) * 4;
        }

        printf("Case #%d: %d %d\n", t, peri, area);
    }
}