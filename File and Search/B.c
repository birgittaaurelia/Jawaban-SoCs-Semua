#include <stdio.h>
#include <string.h>

struct Dictionary{
    char name[41];
    char plant[41];
};

int main(){
    FILE *fp = fopen("testdata.in", "r");
    
    int a;
    fscanf(fp, "%d\n", &a);

    struct Dictionary lists[a];

    for (int i=0; i<a; i++){
        fscanf(fp, "%[^#]#%[^\n]\n", lists[i].name, lists[i].plant);
    }

    int b;
    fscanf(fp, "%d\n", &b);

    for (int i=0; i<b; i++){
        char curr[41];
        fscanf(fp, "%s", curr);

        int isFound = 1;
        for (int j=0; j<a; j++){
            if (strcmp(curr, lists[j].name) == 0){
                isFound = 0;
                printf("Case #%d: %s\n", i+1, lists[j].plant);
                break;
            }
        }

        if (isFound){
            printf("Case #%d: N/A\n", i+1);
        }
    }
    return 0;
}