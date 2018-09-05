#include <stdio.h>

int max(int num1, int num2);
// int max(int, int);
// int max(int a, int b);

int pow(int a, int b)
{
    int x = 1;
    for (int i = 0; i < b; i++)
    {
        x *= a;
    }
    return x;
}

int main()
{
    printf("%d\n", pow(2, 3));
    printf("%d\n", pow(3, 3));
    printf("%d\n", max(10, 20));
    return 0;
}

int max(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}
