#include <stdio.h>
#include <memory.h>

int main(){
    char str[100];
    printf("Enter a word:\n"); 
    scanf("%s",str);
    int len=strlen(str);
    int i=0;
    for(i=(int)(len-1);i>=0;i--){
        printf("%c",str[i]);
    }
}
