#include <stdio.h>

int main(void)
{
    int num;
    int k = 0;

    printf("정수입력 : ");
    scanf("%d", &num);

    while(num > 10) {
        num = num / 10;
        k++;
    }
    k++;

    printf("자리수  = %d\n", k);

    return 0;
}