#include <stdio.h>
#define _crt_secure_no_warnings

int main(void)
{
    printf("달을 입력하시오: ");
    int month, result;
    scanf("%d", &month);

    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        result = 30;
        break;

    case 2:
        result = 28;
        break;

    default:
        result = 31;
        break;
    }
    printf("%d월의 일수는 %d입니다.", month, result);
}