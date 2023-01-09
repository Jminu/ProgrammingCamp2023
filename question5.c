#include <stdio.h>

int main(void)
{
    printf("int : %d\n", sizeof(int));
    printf("float : %d\n", sizeof(float));
    printf("double : %d\n", sizeof(double));
    printf("long : %d\n", sizeof(long));
    printf("char : %d\n", sizeof(char));
    printf("long long : %d\n", sizeof(long long));
    printf("long double : %d\n", sizeof(long double));
    printf("short : %d\n", sizeof(short));

    return 0;
}