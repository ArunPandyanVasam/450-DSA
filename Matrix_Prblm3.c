
#include <stdio.h>
#define N 4
#define N 4

void rotate(int mat[N][N])
{

    int res[N][N] = {0};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            res[j][N - i - 1] = mat[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mat[i][j] = res[i][j];
        }
    }
}

int main()
{
    //  Rotate matrix by 90 degrees
    puts("\n");

    int mat[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    rotate(mat);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", mat[i][j]);
        }
        puts(" ");
    }

    puts("\n");
    return 0;
}