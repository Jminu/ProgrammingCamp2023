#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int r;
    int min = 1, max = 100;
    int length = ((max + 1) - min) / 2;
    int num = 0;
    int count = 0;

    srand(time(NULL));
    r = rand() % 100 + 1; //1~100

    while(num != r){
        printf("%d부터 %d사이의 수를 입력하시오 : ", min, max);
        scanf("%d", &num);

        if(r < (length / 2) && num < r){
            min = num;
        }
        else if(r < (length / 2) && num > r){
            max = num;
        }
        else if(r > (length / 2) && num > r){
            max = num;
        }
        else if(r > (length / 2) && num < r){
            min = num;
        }
        ++count;
    }
    printf("총 %d번 시도했습니다.\n", count);
    return 0;
}