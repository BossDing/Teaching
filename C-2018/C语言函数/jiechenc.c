#include <stdio.h>

int jiec(int n, int max)
{
    if(n<=max && n>0)
    {
        int sum=1;
        for(int i=1;i<=n;i++)
        {
            sum*=i;
        }
        return sum;
    }
    else
    {
        printf("请输入小于%d的数！", max);
        return -1;
    }
}
int main()
{
    int a = jiec(9, 20);
    if (a != -1)
    {
        printf("%d", a);
    }
    return 0;
}
