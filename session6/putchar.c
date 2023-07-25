#include <stdio.h>

int main(){
    char ch;

    printf("please enter any character:\t");
    ch = getchar();

    printf("your character is:\t");
    putchar(ch - 32);

    return 0;
}