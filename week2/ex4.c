#include <stdio.h>

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Start:\na = %i\nb = %i\n",a,b);
    swap(&a,&b);
    printf("End:\na = %i\nb = %i\n",a,b);
}
