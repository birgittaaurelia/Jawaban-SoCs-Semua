#include <stdio.h>

void merge(int left, int mid, int right, int arr[]){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i=0; i<n1; i++){
        L[i] = arr[left + i];
    }
    for (int i=0; i<n2; i++){
        R[i] = arr[mid + 1 + i];
    }

    int i=0, j=0, k=left;
    while (i < n1 && j < n2){
        if (L[i] < R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];

    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int left, int right, int arr[]){
    if (left < right){
        int mid = (left + right)/2;

        mergeSort(left, mid, arr);
        mergeSort(mid+1, right, arr);
        merge(left, mid, right, arr);
    }
}


int main(){
    FILE *fp = fopen("testdata.in", "r");

    int T;
    fscanf(fp, "%d", &T);
    for (int t=1; t<=T; t++){
        int N, M;
        fscanf(fp, "%d %d", &N, &M);

        int P = N * M;

        int arr[P];
        int idx = 0;

        for (int i=0; i<N; i++){
            for (int j=0; j<M; j++){
                fscanf(fp, "%d", &arr[idx]);
                idx++;
            }
        }

        mergeSort(0, P-1, arr);

        int median = 0;
        if (P % 2 == 1) {
            median = arr[P/2];
        }
        else{
            int a = arr[P/2-1];
            int b = arr[P/2];
            median = (a + b)/2.0 + 0.5;
        }

        printf("Case #%d: %d\n", t, median);
    }

    fclose(fp);
}