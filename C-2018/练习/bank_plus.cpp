#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TOTAL_ACCOUNTS 100

struct Account
{
    int account;
    char password[7];
    double money;
} accounts[TOTAL_ACCOUNTS];

int account_index = -1; // 登录用户的索引

void menu(); // 显示菜单
void open(); // 开户
void query(); // 查询
void save(); // 存款
void get(); // 取款
void transfer(); // 转账

void login(); // 账号登录

int rand_account(); // 生成随机账号

int main()
{
    menu();
    return 0;
}

void menu()
{
    int operation = -1;
    do
    {
        printf("1: Open 2: Login 3: Query 4: Save 5: Get 6: Transfer 0: Exit\n");
        scanf("%d", &operation);
        switch (operation)
        {
            case 1: open(); break;
            case 2: login(); break;
            case 3: query(); break;
            case 4: save(); break;
            case 5: get(); break;
            case 6: transfer(); break;
            default: break;
        }
    } while(operation != 0);
}

int rand_account()
{
    srand(time(NULL));
    return rand();
}

void open()
{
    int i = 0;
    for (; i < TOTAL_ACCOUNTS; i++)
    {
        printf("index: %d\n", i);
        printf("account[%d] = %d\n", i, accounts[i]);
        if (accounts[i].account == 0)
        {
            // 此时账号还未被占用
            printf("进入if判断 ，此时的索引：%d\n", i);
            int acc = rand_account();
            printf("生成的随机数：%d\n", acc);
            printf("欢迎开户，请输入账号密码\n");
            char pwd[7];
            fflush(stdin);
            gets(pwd);
            if (strlen(pwd) != 6)
            {
                accounts[i].account = 0; // 如果账号密码错误，则应该把这个账号撤销
                printf("密码必须是6位数");
            }
            else
            {
                accounts[i].account = acc;
                strcpy(accounts[i].password, pwd);
                accounts[i].money = 0.0;
                printf("索引：%d\n", i); // 输出的索引都是0, 应该是编译器的bug
                printf("开户成功，第%d个账户，您的基本信息：%d %s %.2f\n", i + 1, acc, pwd, 0.0); // acc又变化了，可能也是bug
            }
            break;
        }
    }
    if (i == 100)
    {
        printf("对不起，等待下波开户吧\n");
    }
}

void login()
{
    int a;
    int acc;
    char pwd[6];
    printf("请输入账号\n");
    scanf("%d", &a);
    acc = a;
    fflush(stdin);
    printf("请输入密码\n");
    gets(pwd);
    int i = 0;
    for (; i < TOTAL_ACCOUNTS; i++)
    {
        if (acc == accounts[i].account && strcmp(pwd, accounts[i].password) == 0)
        {
            account_index = i;
            printf("登录成功\n");
            break;
        }
    }
    if (i == 100)
    {
        printf("登录失败，账户名或密码错误\n");
    }
}

void query()
{
    if (account_index < 0)
    {
        printf("请登录！\n");
    }
    else
    {
        printf("余额：%.2f\n", accounts[account_index].money);
    }
}

void save()
{
    if (account_index < 0)
    {
        printf("请登录！\n");
    }
    else
    {
        int m;
        printf("请输入存款额：\n");
        scanf("%d", &m);
        if (m < 0)
        {
            printf("存款额必须是正整数\n");
        }
        else
        {
            accounts[account_index].money += m;
            printf("存款成功，余额：%.2f\n", accounts[account_index].money);
        }
    }
}

void get()
{
    if (account_index < 0)
    {
        printf("请登录！\n");
    }
    else
    {
        int m;
        printf("请输入取款额：\n");
        scanf("%d", &m);
        if (m <=0 || m > accounts[account_index].money)
        {
            printf("请输入小于余额的正整数\n");
        }
        else
        {
            accounts[account_index].money -= m;
            printf("取款成功，余额：%.2f\n", accounts[account_index].money);
        }
    }
}

void transfer()
{
    if (account_index < 0)
    {
        printf("请登录！\n");
    }
    else
    {
        printf("请输入对方账号：\n");
        int i = 0;
        int acc;
        scanf("%d", &acc);
        for (; i < TOTAL_ACCOUNTS; i++)
        {
            if (accounts[i].account == acc)
            {
                printf("请输入转账金额：\n");
                int m;
                scanf("%d", &m);
                if (m <=0 || m > accounts[account_index].money)
                {
                    printf("请输入小于余额的正整数\n");
                }
                else
                {
                    accounts[account_index].money -= m;
                    accounts[i].money += m;
                    printf("转账成功，余额：%.2f\n", accounts[account_index].money);
                }
                break;
            }
        }
        if (i == 100)
        {
            printf("错误的对方账号\n");
        }
    }
}
