#include <stdio.h>

int main() {
    puts("\n");


    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int reverseArray[n];

    for (int i = 0; i < n; i++)
    {
        reverseArray[i] = arr[n-1-i];
    }

    printf("The reversed array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", reverseArray[i]);
    }
    
    

    puts("\n");
    return 0;
}