#include <stdlib.h>
#include <stdio.h>

main() {
    int N, *arr;
    printf("Enter N:\n");
    scanf("%d", &N);
    arr = malloc(sizeof(int) * N);
    int i;
    for (i = 0; i < N; ++i) {
        arr[i] = i;
    }
    for (i = 0; i < N; ++i) {
        printf("%d\n", arr[i]);
    }
    free(arr);
}
