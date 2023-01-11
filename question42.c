#include <stdio.h>

int main(void)
{
    int i = 0;
    //while
    while(i < 10){
        printf("%d", i);
        ++i;
    }
    printf("\n");
    //do..while
    i = 0;
    do{
        printf("%d", i);
        ++i;
    }while(i < 10);

    return 0;
}