#include <stdio.h>

#define A -012
#define C "\007"

int main()
{
    int a = -012;
    int b = 8E2; //
    float c = .2;
    int d = 027;
    int e = '\12A';
    int f = '\177';
    printf("%d\n", a);
    printf("%d\n", A);
    printf("%d\n", b);
    printf("%f\n", c);

    int x, y;
    x = y = 3;
    x = -1;
    int t = ++x || ++y;

    printf("%d, %d, %d\n", x, y, t);
    printf("%c\n", C);
    printf("%d\n", e);
    printf("%d\n", f);

    return 0;
}
