
#include <stdio.h>

int main()
{
    //  Write a program to cyclically rotate an array by one.
    puts("\n");
    int arr[] = {2, 3, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lastElement = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = lastElement;

    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    puts("\n");
    return 0;
}