//1번 커밋바꿈 ㅋ
#include <stdio.h>

int main(void)
{
    int a, b, c;
    int max;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        if(a > c)
            max = a;
        else
            max = c;
    }
    else{ //a < b
        if(b > c)
            max = b;
        else
            max = c;
    }

    printf("가장 큰 수 : %d\n", max);

    return 0;
}
