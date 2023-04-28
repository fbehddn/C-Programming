#include <stdio.h>

int main(void)
{
    int n = 1;

    printf("====================\n");
    printf("    n     n의 제곱\n");
    printf("====================\n");

    while (n <= 10)
    {
        printf("%5d    %5d\n", n, n * n);
        n++;
    }
    return 0;
}