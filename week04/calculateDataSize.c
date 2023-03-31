#include <stdio.h>

int main(void)
{
    short year = 0;        // 2바이트
    int sale = 0;          // 4바이트
    long total_sale = 0;   // 4바이트
    long long large_value; // 8바이트

    year = 10;
    sale = 200000000; // 2147483648
    total_sale = year * sale;

    printf("total_sale= %d\n", total_sale);

    return 0;
}