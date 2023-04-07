#include <stdio.h>
#define _crt_secure_no_warnings

int main(void)
{
    int number;
    printf("정수를 입력하시오: ");
    scanf("%d", &number);

    if (number >= 100)
        printf("large");
    else
        printf("small");
}
