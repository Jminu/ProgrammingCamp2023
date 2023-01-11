#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;
    printf("정수 범위 입력 : ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    printf("1 ~ %d 홀수합 = %d", num, sum);
    return 0;
}