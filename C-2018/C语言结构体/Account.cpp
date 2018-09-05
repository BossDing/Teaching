#include <stdio.h>
#include <string.h>

struct Account
{
    int account;
    char password[7];
    double money;
};

int main()
{
    // struct Account acc = {10000, "123456", 100.0};
    struct Account acc;
    acc.account = 10000;
    //acc.password = "123456";
    strcpy(acc.password, "123456");
    acc.money = 100.0;
    printf("%d\t%s\t%.2f\n", acc.account, acc.password, acc.money);
    acc.money += 200.0;
    printf("%d\t%s\t%.2f\n", acc.account, acc.password, acc.money);

    struct Account accounts[10];
    accounts[0].money = 100.0;
    accounts[1].money = 2000.0;
    accounts[9].money = 300.0;
    printf("%.2f\t%.2f\t%.2f\n", accounts[0].money, accounts[1].money, accounts[9].money);
    return 0;
}
