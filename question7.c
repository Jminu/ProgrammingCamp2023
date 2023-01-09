#include <stdio.h>

int main(void)
{
    int apple;
    int box;

    printf("사과 수 입력 : ");
    scanf("%d", &apple);

    if(apple % 20 != 0){
        box = (apple / 20) + 1;
    }
    else{
        box = apple / 20;
    }

    printf("상자 수  : %d", box);
    return 0;
}