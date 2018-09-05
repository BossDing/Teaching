#include <stdio.h>

int sum()
{
    int he=0;
    for(int i=1;i<101;i++)
    {
        he+=i;
    }
}
int main()
{
    printf("%d",sum());
    return 0;
}
