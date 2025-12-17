#include <stdio.h>
#include <string.h>

struct Data {
    char ID[11];
    char name[21];
};

int main(){
    FILE *fp = fopen("testdata.in", "r");

    int a;
    fscanf(fp, "%d", &a);

    struct Data lists[a];

    for (int i=0; i<a; i++){
        fscanf(fp, "%s %s", lists[i].ID, lists[i].name);
    }

    int b;
    fscanf(fp, "%d", &b);

    for (int i=0; i<b; i++){
        char curr[11];
        fscanf(fp, "%s", curr);

        int isFound = 1;

        for (int j=0; j<a; j++){
            if (strcmp(curr, lists[j].ID) == 0){
                printf("Case #%d: %s\n", i+1, lists[j].name);
                isFound = 0;
                break;
            }
        }

        if (isFound){
            printf("Case #%d: N/A\n", i+1);
        }
    }
    return 0;
}