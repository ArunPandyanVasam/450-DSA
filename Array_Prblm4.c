
#include <stdio.h>

int main()
{
    //  Find if there is any subarray with sum equal to 0
    puts("\n");

    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        if (sum == 0) {
            printf("Found a subarray with 0 sum\n");
            break;
        }

        for (int j = i+1; j < n; j++)
        {
            sum += arr[j];
            if (sum == 0) {
                printf("Found a subarray with 0 sum\n");
                break;
            }
        }

        if (sum == 0) {
            break;
        }
        
    }
    

    puts("\n");
    return 0;
}