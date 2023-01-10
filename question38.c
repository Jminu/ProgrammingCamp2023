#include <stdio.h>

int main(void)
{
    char ch1, ch2, ch3;

    scanf("%c %c %c", &ch1, &ch2, &ch3);
    if(ch1 < ch2){
        if(ch1 < ch3)
            printf("%c", ch1);
        else
            printf("%c", ch3);
    }
    else{
        if(ch2 < ch3)
            printf("%c", ch2);
        else
            printf("%c", ch3);
    }
    return 0;
}