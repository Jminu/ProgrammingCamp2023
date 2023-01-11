#include <stdio.h>

int main(void)
{
    int year;
    int k;

    printf("해를 입력 : ");
    scanf("%d", &year);

    k = (year - 1900) % 12;

    switch (k) {
        case 0:
            printf("쥐띠\n");
            break;
        case 1:
            printf("소띠\n");
            break;
        default:
            printf("나머지 띠 중 하나입니다.\n");
            break;
    }
    return 0;
}