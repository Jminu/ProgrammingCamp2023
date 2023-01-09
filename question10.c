#include <stdio.h>

int main(void)
{
    int second;
    int min;
    int hour;

    scanf("%d", &second);

    hour = second / 3600; //시간;
    second = second % 3600; //남은 초
    min = second / 60; //분
    second = second % 60;

    printf("%d시간 %d분 %d초\n", hour, min, second);

    return 0;
}