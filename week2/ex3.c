#include <stdio.h>

void print1(int n){
    int a=0,i;
    for(i=n;i>0;i--){
        int j;
        for(j=0;j<n-a;j++){
            printf(" ");
        }
        int z;
        for(j=0;j<1+2*a;j++){
            printf("*");
        }
        a++;
        printf("\n");
    }
}

void print2(int n){
    int a=1,i;
    for(i=n;i>0;i--){
        int j;
        for(j=0;j<a;j++){
            printf("*");
        }
        a++;
        printf("\n");
    }
}

void print3(int n){
    int a=1,b=1,i;
    for(i=n;i>0;i--){
        int j;
        for(j=0;j<a;j++){
            printf("*");
        }
        b++;
        if(b<=(n/2)+1)a++;
        else a--;
        printf("\n");
    }
}

void print4(int n){
    int i;
    for(i=n;i>0;i--){
        int j;
        for(j=n;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n,type;
    printf("Enter n = ");
    scanf("%d",&n);
    printf("Enter type = ");
    scanf("%d",&type);

    switch (type){
        case 1:
            print1(n);
            break;
        case 2:
            print2(n);
            break;
        case 3:
            print3(n);
            break;
        case 4:
            print4(n);
            break;
        default:
            printf("No such type");
    }

}
