#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("3개의 정수 입력 : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        if(a > c){
            printf("%d\n", a);
        }
        else{
            printf("%d\n", c);
        }
    }
    else{
        if(b > c){
            printf("%d\n", b);
        }
        else{
            printf("%d\n", c);
        }
    }
    return 0;
}