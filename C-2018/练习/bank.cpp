#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define VALID_ACCOUNT 1
#define INVALID_ACCOUNT 2

int account; // 银行卡号
char password[6]; // 密码
double money; // 余额

int rand_account()
{
    srand(time(NULL));
    return rand();
}

void open()
{
    account = rand_account();
    int invalid_pwd = 1; // 密码是不正确的
    do
    {
        printf("请输入密码\n");
        scanf("%s", password);
        if (strlen(password) != 6)
        {
            printf("请重新输入密码，密码必须是6位数\n");
        }
        else
        {
            money = 0.0;
            printf("开户成功，账号为：%d，请牢记密码\n", account);
            invalid_pwd = 0;
        }
    } while (invalid_pwd);
}

int check_account()
{
    int acc;
    int acc1;
    char *pwd;
    printf("请输入账号：\n");
    scanf("%d", &acc);
    acc1 = acc;
    printf("请输入密码：\n");
    scanf("%s", pwd);
    if (account == acc1 && strcmp(pwd, password) == 0)
    {
        return VALID_ACCOUNT;
    }
    return INVALID_ACCOUNT;
}

double query()
{
    int result = check_account();
    if (result == VALID_ACCOUNT)
    {
        printf("您的余额：%.2f\n", money);
    }
    else
    {
        printf("账户或密码错误\n");
    }
}

void save()
{
    int result = check_account();
    if (result == VALID_ACCOUNT)
    {
        printf("请输入存款额\n");
        int m;
        scanf("%d", &m);
        if (m > 0)
        {
            money += m;
            printf("存款成功，余额为：%.2f\n", money);
        }
        else
        {
            printf("存款额必须是正整数\n");
        }
    }
    else
    {
        printf("账户或密码错误\n");
    }
}

void get()
{
    int result = check_account();
    if (result == VALID_ACCOUNT)
    {
        printf("请输入取款额\n");
        int m;
        scanf("%d", &m);
        if (m <= 0)
        {
            printf("取款数必须是正整数\n");
        }
        else if (m > money)
        {
            printf("余额不足\n");
        }
        else
        {
            money -= m;
            printf("取款成功，余额为：%.2f\n", money);
        }
    }
    else
    {
        printf("账户或密码错误\n");
    }
}

void menu()
{
    int operation = -1;
    printf("欢迎来到**银行\n");
    do
    {
        printf("1：开户\t2：查询余额\t3：存款\t4：取款\t0：退出\n");
        scanf("%d", &operation);
        switch (operation)
        {
            case 1: open(); break;
            case 2: query(); break;
            case 3: save(); break;
            case 4: get(); break;
            default:break;
        }
    } while (operation != 0);
}

int main()
{
    menu();
    return 0;
}
