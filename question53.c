#include <stdio.h>

int main(void)
{
    int i;

    for(i = 1; i <= 100; i++){
        if(i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");
    i = 1;
    while(i <= 100){
        if(i % 2 != 0)
            printf("%d ", i);
        i++;
    }
    printf("\n");
    i = 1;
    do{
        if(i % 2 != 0)
            printf("%d ", i);
        i++;
    }while(i <= 100);

    return 0;
}