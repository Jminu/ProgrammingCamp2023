#include <stdio.h>

int max_common_factor(int, int);

int main(void)
{
    int a, b;
    int max_common;

    printf("2개의 자연수 입력 : ");
    scanf("%d %d", &a, &b);

    max_common = max_common_factor(a, b);
    printf("최대공약수 : %d\n", max_common);

    return 0;
}

int max_common_factor(int a, int b)
{
    int x, y, r;
    if(a > b){
        y = b;
        x = a;
    }
    else{
        y = a;
        x = b;
    }

    if(y == 0)
        return x;
    else{
        r = x % y;
        x = y;
        y = r;
        return max_common_factor(x, y);
    }
}