#include <stdio.h>


void buble_sort(int *arr,int n) {
    int i, j,*p=arr;
    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - 1; i++) {
            if (*arr > *(arr + 1)) {
                int c = *arr;
                *arr = *(arr + 1);
                *(arr + 1) = c;
            }
            arr++;
        }
        arr=p;
    }
}

int main(){
    printf("Введите размер массива: ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Введите %d элементов массива: \n",n);
    int i;
    for (i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    buble_sort(&arr,n);
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
