#include <stdio.h>
/**
    在c语言中，英文字符占用一个字节，中文字符2个字节

    只要不需要使用数组，则字符串都直接使用""扩起来的形式
*/
int main()
{
    char ary[] = {'你', 'e', 'l', 'l', 'o'};
    char ar[] = "abc"; // 仍然是数组，字符串
    char chinese[] = "中国chinese";
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", ary[i]);
    }
    printf("%s\n", ary); // 如果是字符数组，使用%s的形式输出，最后多了一个方框
    printf("%s\n", ar);
    printf("%c\n", ar[2]);
    printf("%s\n", chinese); // %s可以输出整个char数组中的内容
    printf("%c\n", chinese[1]);

    char a[2]; // 长度可以随便给
    scanf("%s", a);
    printf("%s\n", a);
    printf("%d\n",sizeof(a)); // 与变量定义中的长度一致
    printf("%c\n", a[1]); // 可以超出变量定义中的长度
    return 0;
}
