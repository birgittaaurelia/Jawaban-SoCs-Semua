#include <stdio.h>
#include <string.h>

struct Product{
    char name[51];
    int stock;
};

int main(){
    FILE *fp = fopen("testdata.in", "r");

    int T;
    fscanf(fp, "%d\n", &T);

    for (int t=1; t<=T; t++){
        int a;
        fscanf(fp, "%d\n", &a);

        struct Product lists[101];
        int p = 0;

        for (int j=0; j<a; j++){
            char status[50];
            char item[51];
            int stock;

            fscanf(fp, "%[^#]#%[^#]#%d\n", status, item, &stock);

            int found = 0;
            for (int i=0; i<p; i++){
                if (strcmp(item, lists[i].name) == 0){
                    found = 1;
                    if (strcmp(status, "buy") == 0){
                        lists[i].stock += stock;
                    }
                    else{
                        lists[i].stock -= stock;
                    }
                }
            }
            if (!found){
                strcpy(lists[p].name, item);
                lists[p].stock = 0;
                if (strcmp(status, "buy") == 0){
                    lists[p].stock += stock;
                }
                else{
                    lists[p].stock -= stock;
                }
                p++;
            }
        }

        printf("Case #%d:\n", t);

        int isNotValid = 0;
        for (int i=0; i<p; i++){
            if (lists[i].stock < 0){
                isNotValid = 1;
                printf("stock is not enough for product %s\n", lists[i].name);
            }
        }

        if (!isNotValid){
            for (int i=0; i<p; i++){
                printf("%s - %d\n", lists[i].name, lists[i].stock);
            }
        }
    }
    return 0;
}