#include <stdio.h>
#define _crt_secure_no_warnings

int main(void)
{
    int score;
    printf("정수를 입력하시오: ");
    scanf("%d", &score);

    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");
}
