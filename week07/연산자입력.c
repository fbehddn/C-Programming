
#define _crt_secure_no_warnings
#include <stdio.h>

int main(void)
{
    char op;
    int x, y, result;

    printf("수식을 입력하세요: ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+')
        result = x + y;
    else if (op == '-')
        result = x - y;
    else if (op == '*')
        result = x * y;
    else if (op == '/')
        result = x / y;
    else if (op == '%')
        result = x % y;

    else
        printf("지원하지 않는 형식입니다.");

    printf("%d %c %d의 연산결과는 %d입니다", x, op, y, result);
}