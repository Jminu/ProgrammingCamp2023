#include <stdio.h>

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

    for(int i = 0; i < 8; i++){
        binary[7 - i] = ascii % 2;
        ascii = ascii / 2;
    }
    return 0;
}