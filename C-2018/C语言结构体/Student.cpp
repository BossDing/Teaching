#include <stdio.h>
#include <string.h>

struct Student
{
    int no;
    char name[5];
    int age;
}; // 没有变量名

struct Student1
{
    int no;
    char name[5];
    int age;
} student; // 声明了变量

struct Student2
{
    int no;
    char name[5];
    int age;
} students[100]; // 声明了一个数组变量

int main()
{
    struct Student stu1; // 使用结构体来声明变量
    stu1.no = 1001;
    strcpy(stu1.name, "abc");
    stu1.age = 20;

    student.no = 1001; // 直接使用已经声明好的变量
    strcpy(student.name, "ad");
    student.age = 10;
    printf("%d\n", student.age);

    students[0].age = 20;
    printf("%d\n", students[0].age);
    return 0;
}
