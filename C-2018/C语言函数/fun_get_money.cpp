#include <stdio.h>

int getMoney(int money)
{
    printf("取款%d元\n", money);
}

int main()
{
    getMoney(500);
    getMoney(1000);
    return 0;
}
