
#include <stdio.h>
#include <stdbool.h>
#define ROWS 4
#define COLUMNS 4

int rowWithMax1s(int mat[ROWS][COLUMNS])
{
    int indexOfRowWithMax1s = -1;
    int maxCount = 0;

    for (int i = 0; i < ROWS; i++)
    {
        int count = 0;
        for (int j = 0; j < COLUMNS; j++)
        {
            if (mat[i][j] == 1) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            indexOfRowWithMax1s = i;
        }
    }

    return indexOfRowWithMax1s;
}

int main()
{
    //  Find row with maximum no. of 1's
    puts("\n");

    int mat[ROWS][COLUMNS] = {{0, 1, 1, 1},
                              {0, 0, 1, 1},
                              {1, 1, 1, 1},
                              {0, 0, 0, 0}};

    int result = rowWithMax1s(mat);

    printf("Row with max no.of 1's - Row[%d]", result);

    puts("\n");
    return 0;
}