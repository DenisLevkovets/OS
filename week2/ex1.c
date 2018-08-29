#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    int v1=INT_MAX;
    float v2=FLT_MAX;
    double v3=DBL_MAX;
    printf("MAX INT:   %d\n",v1);
    printf("SIZE OF INT:  %d\n",(int)sizeof(int));
    printf("MAX FLOAT:   %g\n",v2);
    printf("SIZE OF FLOAT:  %d\n", (int)sizeof(float));
    printf("MAX DOUBLE:   %g\n",v3);
    printf("SIZE OF DOUBLE:  %d\n",(int)sizeof(double));
}
