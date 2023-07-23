#include <stdio.h>

int main(){
    int value;

    printf("please enter any value:\t");
    scanf("%d", &value);

    if((value % 2) == 0)        printf("even");
    else                        printf("odd");
        

    return 0;
}