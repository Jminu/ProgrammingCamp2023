#include <stdio.h>

int main(void)
{
    int price = 0;
    int temp = 0; //나머지돈

    printf("금액을 입력 : ");
    scanf("%d", &price);

    printf("5만원권 : %d\n", price / 50000);
    price = price % 50000;

    printf("1만원권 : %d\n", price / 10000);
    price = price % 10000;

    printf("5천원권 : %d\n", price / 5000);
    price = price % 5000;

    printf("1천원권 : %d\n", price / 1000);
    price = price % 1000;

    printf("500원권 : %d\n", price / 500);
    price = price % 500;

    printf("100원권 : %d\n", price / 100);
    price = price % 100;

    printf("50원권 : %d\n", price / 50);
    price = price % 50;

    printf("10원권 : %d\n", price / 10);
    price = price % 10;

    printf("5원권 : %d\n", price / 5);
    price = price % 5;

    printf("1원권 : %d\n", price / 1);
    price = price % 1;

    return 0;
}