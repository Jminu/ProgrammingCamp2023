#include <stdio.h>

int main(void)
{
    int i;

    for(i = 1; i < 101; i++){
        if(i % 2 == 0)
            printf("%d ", i);
        else
            continue;
    }
    return 0;
}