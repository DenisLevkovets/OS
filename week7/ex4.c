#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <memory.h>


void *realloc1(void *ptr, int size) {
    void *new;

    if (!ptr) {
        new = malloc(size);
    } else if(!size){
        free(ptr);
        new=ptr;
    } else {
        new = malloc(size);
        memcpy(new, ptr, size);
        free(ptr);
    }

    return new;
}

int main() {
    int n = 4, i;
    int *arr = realloc1(arr, sizeof(int) * n);
    for (i = 0; i < n; ++i) {
        arr[i]=i;
        printf("%d ", arr[i]);
    }
    printf("\n");

    arr = realloc1(arr, 2 * n * sizeof(int));
    for (i = 0; i < 2 * n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    arr=realloc1(arr,0);
    printf("%d\n",*arr);
    
}
