#include <stdio.h>

int main(void)
{
    int x1, y1;
    int x2, y2;
    int x3, y3;

    printf("1번째 좌표 입력(x1, y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("2번째 좌표 입력(x2, y2) : ");
    scanf("%d %d", &x2, &y2);
    printf("3번째 좌표 입력(x3, y3) : ");
    scanf("%d %d", &x3, &y3);

    if((x1 == x2 && x2 == x3) && (y1 == y2 && y2 == y3))
        printf("삼각형을 만들 수 없다.\n");
    else
        printf("삼각형을 만들 수 있다.\n");
    return 0;
}