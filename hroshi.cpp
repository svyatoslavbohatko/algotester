#include <stdio.h>

int main(void)
{
    int Returned = 0;
    int money;
    scanf("%d", &money);
    while (money < 0) {
        scanf("%d", &money);
    }
    
    while (money > 0) {
        if ((money - 500) >= 0) { money = money - 500; Returned++; }
        else if ((money - 200) >= 0) { money = money - 200; Returned++; }
        else if ((money - 100) >= 0) { money = money - 100; Returned++; }
        else if ((money - 50) >= 0) { money = money - 50; Returned++; }
        else if ((money - 20) >= 0) { money = money - 20; Returned++; }
        else if ((money - 10) >= 0) { money = money - 10; Returned++; }
        else if ((money - 5) >= 0) { money = money - 5; Returned++; }
        else if ((money - 2) >= 0) { money = money - 2; Returned++; }
        else if ((money - 1) >= 0) { money = money - 1; Returned++; }
    }
    
    printf("%d\n", Returned);
}
