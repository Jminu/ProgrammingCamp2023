#include <stdio.h>

int main(void)
{
    int k = 1000;
    int num;
    int temp = 0;

    scanf("%d", &num);

    for(int i = 0; i < 4; i++){
        if(i == 3) {
            printf("%d = ", num / k);
            temp += num / k;
            printf("%d", temp);
            break;
        }
        printf("%d + ", num / k);
        temp += num / k;
        num = num % k;
        k = k / 10;
    }

    return 0;
}