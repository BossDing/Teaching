#include <stdio.h>

int main()
{
    char char_array[] = {'a', 'b', 'c'};
    printf("%c\n", char_array[1]);
    char_array[1] = 'B';
    printf("%c\n", char_array[1]);
    for (int i = 0; i < 3; i++)
    {
        printf("%c", char_array[i]);
    }
    return 0;
}
