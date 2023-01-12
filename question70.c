#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int r[3];
    srand(time(NULL));

    //초기 랜덤값 3개 할당
    for(int i = 0; i < 3; i++){
        r[i] = rand() % 90 + 1;
    }

    while(!(r[0] == r[1] && r[1] == r[2])){ //3개 동일하면 0반환(거짓)
        for(int i = 0; i < 3; i++){
            r[i] = rand() % 90 + 1;
        }
        printf(" %d %d %d \n", r[0], r[1], r[2]);
    }
    
    printf("축하합니다 당첨입니다!\n");
    return 0;
}