#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    a = abs(a);
    b = abs(b);

    printf("%d\n", a + b);

    return 0;
}