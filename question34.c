#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;

    printf("양의 정수 입력 : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        sum += i;
    }

    printf("%d", sum);
    return 0;
}