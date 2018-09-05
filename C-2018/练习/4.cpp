#include <stdio.h>

int main()
{
    int sum=0;
    int num;
    int max=0;
    int min=100;
    for(int i=1;i<6;i++)
    {
        printf("输入第%d个学生的成绩\n",i);
        scanf("%d",&num);
        if(max<num)
        {
            max=num;
        }
        if(min>num)
        {
            min=num;
        }
        sum+=num;
    }
    float avg=sum/5.0;
    printf("最高分为%d，最低分为%d，平均分为%.2f",max,min,avg);
    return 0;
}
