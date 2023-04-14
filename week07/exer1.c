#define _crt_secure_no_warnings
#include <stdio.h>

int main(void)
{
    int n, m, result;
    char oper;

    printf("수식을  입력하시오: ");
    scanf("%d %c %d", &n, &oper, &m);

    switch (oper)
    {
    case '+':
        result = n + m;
        break;

    case '-':
        result = n - m;
        break;

    case '*':
        result = n * m;
        break;

    case '/':
        result = n / m;
        break;

    case '%':
        result = n % m;
        break;

    default:
        printf("연산자 오류");
    }

    printf("%d %c %d = %d", n, oper, m, result);
}