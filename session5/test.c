#include <stdio.h>

int main(){
    char ch;

    scanf("%c", &ch);

    if((ch == 'a') || (ch == 'A'))           printf("ok");
    else                                    printf("ERROR!");

    return 0;
}