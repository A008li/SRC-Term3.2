#include <stdio.h>

int main(){
    int num1 , num2;
    int e1,e2,e3,e4;

    printf("please enter 2 value:\t");
    scanf("%d,%d", &num1, &num2);

    e1 = num1 + num2;
    e2 = num1 - num2;
    e3 = num1 * num2;
    e4 = num1 / num2;
    num1++;
    num2--;

    printf("\n%d + %d = %d", num1, num2, e1);
    printf("\n%d - %d = %d", num1, num2, e2);
    printf("\n%d x %d = %d", num1, num2, e3);
    printf("\n%d / %d = %d", num1, num2, e4);

    printf("\n\n\n\n%d\n%d",num1 , num2);
    
    return 0;
}