
#include <stdio.h>
#include <stdbool.h>

#define ROWS 3
#define COLUMNS 3

bool searchX(int mat[ROWS][COLUMNS], int x)
{

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (mat[i][j] == x)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    //  Search an element in a matriix
    puts("\n");

    int mat[ROWS][COLUMNS] = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

    int x = 10;

    if (searchX(mat, x))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    puts("\n");
    return 0;
}