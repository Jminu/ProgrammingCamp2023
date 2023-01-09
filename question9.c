#include <stdio.h>

void deci_to_hexi(int);

int main(void)
{
    int num;

    printf("10000보다 작은 정수 입력 : ");
    scanf("%d", &num);

    deci_to_hexi((num));

    return 0;
}

void deci_to_hexi(int x)
{
    if(x < 8){
        printf("0%d", x);
    }
    else{
        deci_to_hexi(x / 8);
        printf("%d", x % 8);
    }
}