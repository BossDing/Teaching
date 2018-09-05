#include <stdio.h>

int main()
{
    int input;
    do
    {
        printf("请输入数字，字母q退出程序，回车键继续\n");
        fflush(stdin);
        scanf("%d", &input);

        if (input % 5 == 0 && input % 7 == 0)
        {
            printf("yes!\n");
        }
        else
        {
            printf("no\n");
        }

        fflush(stdin);
    } while (getchar() != 'q');
    return 0;
}
