#define _OPEN_THREADS

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <unistd.h>

void *thread(void *arg) {
    char *ret;
    printf("thread() entered with argument 'thread %d'\n", arg);
    if ((ret = (char *) malloc(20)) == NULL) {
        perror("malloc() error");
        exit(2);
    }
    printf("You are in the thread %d!\n", arg);
    strcpy(ret, "End of thread ");
    pthread_exit(ret);
}

main() {
    printf("Sequence\n\n\n");
    pthread_t thid;
    void *ret;
    int i;
    for (i = 0; i < 4; i++) {
        pthread_t new = pthread_create(&thid, NULL, thread, i);
        if (new != 0) {
            perror("pthread_create() error");
            exit(1);
        }

        if (pthread_join(thid, &ret) != 0) {
            perror("pthread_create() error");
            exit(3);
        }
        printf("thread exited with '%s %d'\n", ret, i);
        printf("\n\n");

    }


    printf("Parallel\n\n\n");
    pthread_t new1;
    pthread_create(&new1, NULL, thread, 0);

    pthread_t new2;
    pthread_create(&new2, NULL, thread, 1);

    pthread_t new3;
    pthread_create(&new3, NULL, thread, 2);


    printf("thread exited with '%s %d'\n", ret, 0);
    sleep(1);
    printf("thread exited with '%s %d'\n", ret, 1);
    sleep(1);
    printf("thread exited with '%s %d'\n", ret, 2);
    sleep(1);
}