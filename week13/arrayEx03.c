#include <stdio.h>
#define CRT_SECURES_NO_WARNIGS
#define SIZE 5

int main(void)
{
    int scores[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("학생들의 성적을 입력하시오: ");
        scanf("%d", &scores[i]);
    }
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += scores[i];
    }
    int avg = sum / SIZE;

    printf("성적 평균 = %d", avg);
