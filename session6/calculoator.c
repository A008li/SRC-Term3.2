#include <stdio.h>

int main(){
    int val1 , val2;
    char oprator;
    int equal;

    printf("enter 1st value:\t");
    scanf("%d", &val1);

    printf("enter any oprator: (oprator: + - * /)\t");
    scanf("%c", &oprator);
    oprator = getchar();

    printf("enter 2nd value:\t");
    scanf("%d", &val2);

    if(oprator == '+'){
        equal = val1 + val2;
        printf("\n\n%d + %d = %d", val1, val2, equal);
    }
    else if(oprator == '-'){
        equal = val1 - val2;
        printf("\n\n%d - %d = %d", val1, val2, equal);
    }
    else if(oprator == '*'){
        equal = val1 * val2;
        printf("\n\n%d x %d = %d", val1, val2, equal);
    }
    else if(oprator == '/'){
        equal = val1 / val2;
        printf("\n\n%d / %d = %d", val1, val2, equal);
    }
    else printf("ERROR!");
    
    return 0;
}