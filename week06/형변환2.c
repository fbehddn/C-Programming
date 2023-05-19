#include <stdio.h>

int main(void)
{
    int i;
    double f;

    f = 5 / 4;

    printf("%f\n", f);

    f = (double)5 / 4; // 5가 5.0이 되어 전체결과가 1.25가 된다
    printf("%f\n", f);

    f = 5.0 / 4;
    printf("%f\n", f);

    f = (double)5 / (double)4;
    printf("(double)5 / (double)4= %f\n", f);

    i = 1.3 + 1.8;
    printf("1.3 + 1.8= %d\n", i);

    i = (int)1.3 + (int)1.8;
    printf("(int)1.3 + (int)1.8= %d\n ", i);

    return 0;
}