#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    int prev_sum = 0;

    for(i = 1; sum < 1000; i++){
        prev_sum = sum; //이전 sum값 저장
        sum = sum + i;
    }

    printf("1부터 %d 까지의 합 : %d\n", i - 2,  prev_sum);
    return 0;
}