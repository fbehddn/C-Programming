#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

extern unsigned random_i(void);
extern double random_f(void);
extern int MOD;
extern unsigned call_count;

int main(void)
{
    register int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d", random_i());
    }

    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.5f", random_f());
    }

    printf("함수가 호출된 횟수:%d\n", call_count);

    return 0;
}