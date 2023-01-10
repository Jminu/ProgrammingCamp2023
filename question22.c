//2진수를 입력받아 십진수로 변환
#include <stdio.h>
#include <string.h>
#include <math.h>

int binary_to_decimal(char *s, int binary_length);

int main(void)
{
    char binary[9]; //1바이트만 입력가능
    int decimal;
    int size;

    printf("2진수 입력 : ");
    scanf("%s", binary);

    size = strlen(binary);
    decimal = binary_to_decimal(binary, size);

    printf("%d\n", decimal);
    return 0;

}

int binary_to_decimal(char *s, int binary_length)
{
    int sum = 0;
    for(int i = 0; i < binary_length; i++){
        if(s[i] == '1'){
            sum = sum + pow(2, (binary_length - 1) - i);
        }
        else{
            continue;
        }
    }
    return sum;
}