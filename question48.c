#include <stdio.h>

int main(void)
{
    int count = 1;

    while(count < 20){
        count += 3;
        printf("%d ", count);
    }
    printf("\n");
    count = 1;
    //do~while
    do{
        count += 3;
        printf("%d ", count);
    }while(count < 20);
    printf("\n");
    for(count = 4; count < 23; count += 3){
        printf("%d ", count);
    }
    return 0;
}