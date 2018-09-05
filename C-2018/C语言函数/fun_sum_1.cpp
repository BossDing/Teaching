#include <stdio.h>

void sum()
{
    int he = 0;
    for(int i = 1; i <= 100; i++)
    {
        he += i;
    }
    printf("%d\n", he);
    // return;
}

int main()
{
    sum();
    return 0;
}
