#include <stdio.h>

int main(void)
{
    int price, money;
    int restMoney;

    printf("물건값을 입력하시오: ");
    scanf("%d", &price);
    printf("\n투입 금액 입력하시오: ");
    scanf("%d", &money);
    printf("\n거스름돈은 다음과 같습니다.\n\n");

    restMoney = money - price;
    printf("1000원 %d 장\n500원 동전 %d 개\n100원 동전 %d개", restMoney / 1000, (restMoney % 1000) / 500, ((restMoney % 1000) % 500) / 100);
}