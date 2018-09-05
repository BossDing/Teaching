#include <stdio.h>
int main()
{
    int num;
    int flag = 0; // 用于标记是否为素数，0表示素数
    printf("请输入一个数：\n");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag = 1; // 非素数
            break;
        }
    }
    if (flag == 0)
    {
        printf("这是一个素数");
    }
    else if (flag == 1)
    {
        printf("这不是一个素数");
    }
    return 0;
}
