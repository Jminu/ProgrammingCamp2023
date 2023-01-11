#include <stdio.h>

int main(void)
{
    int sum = 0;
    int num;

    while(sum != 100){
        printf("sum = %d 더할 값 입력 : ", sum);
        scanf("%d", &num);
        sum += num;
    }
    printf("sum = %d\n", sum);

    return 0;
}