#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "hansung univ";
    char str2[] = "computer science";
    char str3[100];

    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);

    printf("str3 = %s\n", str3);
    return 0;
}25