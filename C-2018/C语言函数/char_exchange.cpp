#include <stdio.h>

char upper_case(char c)
{
    if (c >= 97 && c <= 122)
    {
        return c - 32;
    }
    else if (c >= 65 && c <= 90)
    {
        return c;
    }
    else
    {
        return 0;
    }
}

char lower_case(char c)
{
    if (c >= 97 && c <= 122)
    {
        return c;
    }
    else if (c >= 65 && c <= 90)
    {
        return c + 32;
    }
    else
    {
        return 0;
    }
}

char* upper_case_array(char array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] >= 97 && array[i] <= 122)
        {
            array[i] = array[i] - 32;
        }
    }
    return array;
}

void upper_case_array_1(char array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] >= 97 && array[i] <= 122)
        {
            array[i] = array[i] - 32;
        }
    }
}

int main()
{
    printf("%c\n", upper_case('B'));
    printf("%c\n", upper_case('k'));
    printf("%c\n", upper_case('&'));
    printf("%c\n", lower_case('J'));
    char c_array[] = "aBcdEF**7ldfjld";
    printf("%s\n", upper_case_array(c_array, 15));
    char c_array_1[] = "aBcdEF**7ldfjld";
    upper_case_array_1(c_array_1, 15);
    printf("%s\n", c_array_1);
    return 0;
}
