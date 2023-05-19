#include <stdio.h>

int main(void)
{
    float f;
    int i;

    f = 5 / 4; // f는 1
    printf("%f \n", f);

    f = (double)5 / 4; // f는 1.25
    printf("%f \n", f);

    f = 5 / (double)4; // f는 1.25
    printf("%f \n", f);

    f = (double)5 / (double)4; // f는 1.25
    printf("%f \n", f);

    i = 1.3 + 1.8; // i는 3
    printf("%d \n", i);

    i = (int)1.3 + (int)1.8; // i는 2
    printf("%d \n", i);

    return 0;
}