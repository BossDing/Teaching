#include <stdio.h>
#include <string.h>

struct Account
{
    int account;
    char password[7];
    double money;
}accounts[100];

void read_account(char *file)
{
    int account;
    char pwd[7]; // 实际字符数加1
    double money;
    FILE *fp = fopen(file, "r");
    int i = 0;
    while (!feof(fp))
    {
        fscanf(fp, "%d,%lf,%s", &account, &money, pwd); // 一次读入一整行
        accounts[i].account = account;
        strcpy(accounts[i].password, pwd);
        accounts[i].money = money;
        i++;
    }
    fclose(fp);
}

void write_account(char *file, struct Account acc)
{
    FILE *fp = fopen(file, "a+");
    fprintf(fp, "\n%d,%lf,%s", acc.account, acc.money, acc.password);
    fclose(fp);
}

int main()
{
    read_account("bank.dat");
    for (int i = 0; i < 100; i++)
    {
        if (accounts[i].account > 0)
        {
            printf("%d, %.2f, %s\n", accounts[i].account, accounts[i].money, accounts[i].password);
        }
    }
    struct Account acc = {1005, "987654", 999.99};
    write_account("bank.dat", acc);
    return 0;
}
