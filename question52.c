#include <stdio.h>

int main(void)
{
    int sum = 0;
    int i;

    for(i = 1; i <= 100; i++){
        sum += i;
    }
    printf("sum = %d\n", sum);

    i = 1;
    sum = 0;
    while(i <= 100){
        sum += i;
        i++;
    }
    printf("sum = %d\n", sum);

    i = 1;
    sum = 0;
    do{
        sum += i;
        i++;
    }while(i <= 100);
    printf("sum = %d\n", sum);

    return 0;
}