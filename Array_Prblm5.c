
#include <stdio.h>

void rearrange(int arr[], int n)
{
    int j = 0, temp;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0)
        {
            if (i != j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    //  Move all the negative elements to one side of the array
    puts("\n");

    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);
    printArray(arr, n);

    puts("\n");
    return 0;
}