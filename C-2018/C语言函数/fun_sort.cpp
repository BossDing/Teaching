#include <stdio.h>

void bubble();

void select();

int main()
{
    bubble();
    printf("\n**************************************\n");
    select();
    return 0;
}

void bubble()
{
    int a[] = {12, 45, 32, 67, 90, 9};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
}

void select()
{
    int a[] = {12, 45, 32, 67, 90, 9};
    for (int i = 0; i < 6; i++)
    {
        int k = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (a[k] > a[j])
            {
                k = j;
            }
        }
        if (k != i)
        {
            int temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
}
