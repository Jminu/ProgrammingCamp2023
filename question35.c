#include <stdio.h>

int main(void)
{
    int num;
    printf("양의 정수 입력 : ");
    scanf("%d", &num);

    for(int i = num; i >= 1; i--){
        if((i % 2) != 0){
            printf("%d ", i);
        }
    }
    return 0;
}