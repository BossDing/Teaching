#include <stdio.h>

struct Cpu
{
    char *brand;
    double price;
    int cores;
};

struct Ram
{
    char *brand;
    double price;
    int size;
};

struct Computer
{
    char *brand;
    double price;
    struct Cpu cpu; // 结构体内部的结构体
    struct Ram ram;
};

int main()
{
    struct Computer computer;
    computer.brand = "lenovo";
    computer.price = 9999.99;

    computer.cpu.brand = "Intel";
    computer.cpu.price = 2000.0;
    computer.cpu.cores = 8;

    computer.ram.brand = "Kingston";
    computer.ram.price = 500.0;
    computer.ram.size = 8;

    printf("%s\t%.2f\n", computer.brand, computer.price);
    printf("CPU: %s\t%.2f\n", computer.cpu.brand, computer.cpu.price);
    printf("RAM: %s\t%.2f\n", computer.ram.brand, computer.ram.price);
    return 0;
}
