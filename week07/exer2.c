#include <stdio.h>
#define _crt_secure_no_warnings

int main(void)
{
    printf("정수 두 개를 입력: ");
    int n, m;
    scanf("%d %d", &n, &m);

    if (n % m == 0)
        printf("나누어떨어짐 이렇게 하는거 마증??");
    else
        printf("안나눠짐");
}