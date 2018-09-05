#include <stdio.h>

void copy(char *srcPath, char *destPath)//写文件的。。
{
    FILE *src = fopen(srcPath, "r");
    FILE *dest = fopen(destPath, "w");
    char ch;
    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);
}

/**
    先整体读入字符串到一个缓冲区
    再一次性把缓冲区的内容写到文件中，相对于单个字符的读取与写出，性能更高
    对下面
*/
void copy1(char *srcPath, char *destPath)
{
    FILE *src = fopen(srcPath, "r");
    FILE *dest = fopen(destPath, "w");
    char buffer[1024];
    while (fgets(buffer, 1024, src) != NULL)
    {
        fputs(buffer, dest);
    }
    fclose(src);
    fclose(dest);
}

int main()
{
    FILE *fp = fopen("test.txt", "r"); // r read 可读 文件必须存在 w writer 可写 文件如果不存在，则创建文件 a append 追加  （直接用+， w+）
    if (fp == NULL)
    {
        printf("文件打开失败\n");
    }
    else
    {
        printf("文件打开成功\n");
    }

    char ch;

    // ch = fgetc(fp); // 读入单个字符，在c语言中，用EOF表示文件结尾

    while((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    printf("\n");
    int result = fclose(fp); // 打开的文件一定要关闭
    if (result == 0)
    {
        printf("文件关闭成功\n");
    }
    else if (result == EOF)
    {
        printf("文件关闭失败"); // EOF是一个常用，可以用于表示文件关闭失败
    }

    copy("test.txt", "test1.txt");
    copy1("test.txt", "test2.txt");
    return 0;
}
