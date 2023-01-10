#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num = rand() % 5 + 1;

    switch (num) {
        case 1:
            printf("1등 : 프린터, 컴퓨터, 상금, 상패\n");
            break;
        case 2:
            printf("2등 : 컴퓨터, 상금, 상패\n");
            break;
        case 3:
            printf("3등 : 상금, 상패\n");
            break;
        case 4:
            printf("4등 : 상패\n");
            break;
        default:
            printf("없음 \n");
            break;
    }
    return 0;
}