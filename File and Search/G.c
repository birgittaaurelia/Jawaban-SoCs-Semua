#include <stdio.h>

int main(){
    FILE *fp = fopen("testdata.in", "r");

    int T;
    fscanf(fp, "%d\n", &T);

    for (int t=1; t<=T; t++){
        int len;
        int min, max;

        int countLightning = 0;

        fscanf(fp, "%d %d %d", &len, &min, &max);

        char total[len];
        int curr = 0;

        fscanf(fp, "%s", total);

        for (int i=0; i<=len; i++){
            if (total[i] == '0' || total[i] == '\0'){
                if (curr <= max && curr >= min){
                    countLightning++;
                }
                curr = 0;
            }
            else{
                curr++;
            }
        }
        printf("Case #%d: %d\n", t, countLightning);
    }
    return 0;
}