#include <stdio.h>

struct Person
{
    char id[18];
    char name[10];
    char gender;
    int age;
    float height;
    float weight;
};

int main()
{
    struct Person p1 = {"360730100100", "张三", '男', 20, 170.0, 60.0};
    // Person p1 = {"360730100100", "张三", '男', 20, 170.0, 60.0};   // 可以省略struct
    Person p2 = {"360730100111", "李四", '男', 20, 170.0, 60.0};
    printf("%s\t", p1.id);
    printf("%s\t", p1.name);
    printf("%d\t", p1.age);
    printf("\n");
    printf("%s\t", p2.id);
    printf("%s\t", p2.name);
    printf("%d\t", p2.age);
    return 0;
}
