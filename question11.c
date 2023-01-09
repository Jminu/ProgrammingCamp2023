#include <stdio.h>

int main(void)
{
    int second;
    int min;
    int hour;

    printf("시 분 초 입력 : ");
    scanf("%d %d %d", &hour, &min, &second);

    hour = hour * 3600;
    min = min * 60;
    second = second + min + hour;

    printf("%d초 입니다. \n", second);
    return 0;
}