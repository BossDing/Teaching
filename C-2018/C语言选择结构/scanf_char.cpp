#include <stdio.h>

int main()
{
    char answer;

    /**
    printf("中国属于哪个洲?\n");
    printf("A. 非洲\tB、北美洲\tC、亚洲\tD、赣州\n");
    fflush(stdin);
    scanf("%c", &answer);
    printf("%c\n", answer);

    printf("美国属于哪个洲?\n");
    printf("A. 非洲\tB、北美洲\tC、亚洲\tD、赣州\n");
    fflush(stdin);
    scanf("%c", &answer);
    printf("%c\n", answer);
    */

    printf("美国属于哪个洲?\n");
    printf("A. 非洲\tB、北美洲\tC、亚洲\tD、赣州\n");
    answer = getchar();
    printf("%c\n", answer);

    printf("美国属于哪个洲?\n");
    printf("A. 非洲\tB、北美洲\tC、亚洲\tD、赣州\n");
    fflush(stdin);
    answer = getchar();
    printf("%c\n", answer);


    return 0;
}
