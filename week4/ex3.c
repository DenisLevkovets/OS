#include <stdlib.h> 
#include <stdio.h>
int main() {
    char cmd[99];
    while (1)
    {
        printf(">");
        scanf("%s", cmd);
        system(cmd);
    }
    return 0;
}
