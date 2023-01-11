#include <stdio.h>

int main(void)
{
    int sum = 100;
    int num;

    while(sum != 0){
        printf("sum = %d 뺄 값 입력 : ", sum);
        scanf("%d", &num);
        sum -= num;
    }
    printf("sum = 0\n");

    return 0;
}