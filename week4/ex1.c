#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(){
    int n=100;
    int pid;
    pid=fork();
    if(pid>0){
        printf("Hello from parent %d\n",getpid()-n);
    }
    else if(pid==0){
        printf("Hello from child %d\n",getpid()-n);
    }

 return 0; 
}
