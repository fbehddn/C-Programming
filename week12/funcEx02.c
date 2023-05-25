// 함수를 사용하여 어떤 정수가 소수 2개의 합으로 표시될 수 있는지 검사하는 프로그램
// 본문에서 사용한 is_prime() 함수를 사용하면 된다.

#include <stdio.h>
#define CRT_SECURE_NO_WARNIGS

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void find_prime_sum(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (is_prime(i) && is_prime(n - i))
            printf("%d = %d + %d\n", n, i, n - i);
    }
}

int main()
{
    int num;
    printf("양의 정수 입력: ");
    scanf("%d", &num);

    find_prime_sum(num);

    return 0;
}
