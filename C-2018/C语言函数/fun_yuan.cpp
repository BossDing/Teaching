#include <stdio.h>
#define PI 3.14

float ban(int a)
{
    float mianji;
    mianji = 2*PI*a*a;
    return mianji;
}

int zhuochang(int b, int c)
{
    int zuochang;
    zuochang = (b + c) * 2;
    return zuochang;
}
int main()
{
    int a;
    int b;
    int c;
    printf("请输入元的半径\n");
    scanf("%d",&a);
    printf("%.2f",ban(a));
    printf("请输入长方形的长和宽\n");
    scanf("%d %d",&b,&c);
    printf("%d",zhuochang(b,c));
    return 0;
}
