#include <stdio.h>
#include <string.h>

int main()
{
    char c1[] = "abcdef"; // 可行
    printf("%s\n", c1);
    // scanf("%s", c1);

    /**
    char c2[5] = "fdlkjfldskfj"; // 长度超出数组长度，不可行
    printf("%s\n", c2);
    */

    /**
    char c3[20];
    c3 = "adfljd"; // 不可行
    printf("%s\n", c3);
    */

    char c4[20];
    strcpy(c4, "adfdsf");
    printf("%s\n", c4);
    // scanf("%s", c4);

    char *s1 = "dfjlkdsjfldskfjdslkfjkl";
    printf("%s\n", s1);

    char *s2;
    s2 = "djfldkfjdlksfjdlks";
    printf("%s\n", s2);

    char *s3;
    s3 = c1;
    printf("%s\n", s3);

    char s4[10];
    gets(s4);
    puts(s4);
    char *s5 = s4;
    gets(s5);
    puts(s5);
    puts(s4);

    /**
    char *s6; // 此时无初始化的地址，
    gets(s6); // 字符串不知道放入内存空间的哪个地址上，报错
    puts(s6);
    */

    /**
    char *s7;
    strcpy(s7, "abc"); // 不可行
    puts(s7);
    */

    return 0;
}
