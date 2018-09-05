#include <stdio.h>

void bubble(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", a[i]);
    }
}

void select(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int k = i;
        for (int j = i + 1; j < length; j++)
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
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    int a[] = {23, 45, 12, 9, 8, 67, 1};
    bubble(a, 7);
    printf("\n*****************************************\n");
    select(a, 7);
    return 0;
}
