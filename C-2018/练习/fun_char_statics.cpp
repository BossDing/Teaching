#include <stdio.h>
#include <string.h>

void char_statics(char array[])
{
    int upper_case = 0;
    int lower_case = 0;
    int other_case = 0;
    int digit = 0;
    int chinese_case = 0;
    for (int i = 0, len = strlen(array); i < len; i++)
    {
        if (array[i] >= 'A' && array[i] <= 'Z')
        {
            upper_case++;
        }
        else if (array[i] >= 'a' && array[i] <= 'z')
        {
            lower_case++;
        }
        else if (array[i] >= '0' && array[i] <= '9')
        {
            digit++;
        }
        else if (array[i] < 0 && array[i + 1] < 0)
        {
            chinese_case++;
            i++;
        }
        else
        {
            other_case++;
        }
    }
    printf("大写字母：%d\n", upper_case);
    printf("小写字母：%d\n", lower_case);
    printf("数字：%d\n", digit);
    printf("其他字符：%d\n", other_case);
    printf("中文字符：%d\n", chinese_case);
}

int main()
{
    char a[] = "abce"; // 字符串由\0结束
    char b[]= "abcd";
    printf("%d\n", strlen(a)); // 统计字符串的长度，不包括\0
    printf("%d\n", sizeof(a)); // 统计占用的空间 10，包括\0
    for (int i = 0, length = strlen(a); i < length; i++) // strlen() 获取字符串长度   string length
    {
        printf("%c\n", a[i]);
    }
    /**
    for (int i = 0; i < strlen(a); i++)
    {

    }
    */
    printf("%d\n", strcmp(a, b)); // strcmp()  比较两个字符串是否相等  string compare
    /**
        strcmp的返回值为-1, 0, 1
        strcmp(a, b)
        如果a字符串按照字母的自然顺序排在b字符串前面，则返回-1
        如果a字符串按照字母的自然顺序与b字符串的自然顺序一样，则返回0
        如果a字符串按照字母的自然顺序排在b字符串的后面，则返回1
    */

    char c[] =  "dslkfjdsADSFDFD787687$$$中国，你好！";
    char_statics(c);
    return 0;
}
