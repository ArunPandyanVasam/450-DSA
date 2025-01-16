
#include <stdio.h>

int main()
{
    //  Find the maximum and minimum element in an array
    puts("\n");

    int arr[] = {1, 2, 9, 4, 0};
    int max = arr[0], min = arr[0];
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Min - %d", min);
    puts(" ");
    printf("Max - %d", max);

    puts("\n");
    return 0;
}