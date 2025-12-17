#include <stdio.h>
#include <string.h>

struct Plants{
    int num;
    char name[41];
};

void merge(struct Plants lists[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    struct Plants L[n1];
    struct Plants R[n2];

    for (int i=0; i<n1; i++){
        L[i] = lists[left + i];
    }

    for (int i=0; i<n2; i++){
        R[i] = lists[mid + 1 + i];
    }

    int i=0, j=0, k=left;
    while(i<n1 && j<n2){
        if(strcmp(L[i].name, R[j].name) < 0){
            lists[k++] = L[i++];
        }
        else{
            lists[k++] = R[j++];
        }
    }

    while (i<n1) lists[k++] = L[i++];
    while (j<n2) lists[k++] = R[j++];
}

void mergeSort(struct Plants lists[], int left, int right){
    if (left < right){
        int mid = left + (right - left)/2;

        mergeSort(lists, left, mid);
        mergeSort(lists, mid+1, right);
        merge(lists, left, mid, right);
    }
}

int main(){
    FILE *fp = fopen("testdata.in", "r");

    int T;
    fscanf(fp, "%d\n", &T);

    struct Plants lists[T];

    for (int t=0; t<T; t++){
        fscanf(fp, "%d#%[^\n]\n", &lists[t].num, lists[t].name);
    }

    mergeSort(lists, 0, T-1);

    for (int t=0; t<T; t++){
        printf("%d %s\n", lists[t].num, lists[t].name);
    }

    fclose(fp);

}