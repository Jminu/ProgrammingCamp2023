
#include <stdio.h>

void deci_to_binary(int);

int main(void)
{
    char ascii;
    int binary[8];
    scanf("%c", &ascii);

    //10진수
    printf("10진수  : %d\n", ascii);
    printf("8진수 : %o\n", ascii);
    printf("16진수 : %x\n", ascii);
    printf("2진수 : ");
    deci_to_binary(ascii);

    return 0;
}

void deci_to_binary(int x)
{
    if(x <= 1){
        printf("%d", x);
    }
    else{
        deci_to_binary(x / 2);
        printf("%d", x % 2);
    }
}