#include <stdio.h>


void printMatrix(int row, int col, int *matrix)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", *(matrix + i * col + j));
        }
        printf("\n");
    }
}

int main(){
    //add details
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int b[3][2] = {{1, 6},
                   {5, 3},
                   {4, 2}};

    int a_rows = sizeof(a) / sizeof(a[0]);
    int a_cols = sizeof(a[0]) / sizeof(a[0][0]);

    int b_rows = sizeof(b) / sizeof(b[0]);
    int b_cols = sizeof(b[0]) / sizeof(b[0][0]);

    int c_rows = a_rows;
    int c_cols = b_cols;

    int c[c_rows][c_cols];

    for (int i = 0; i < c_rows; i++)
    {
        for (int j = 0; j < c_cols; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < a_cols; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printMatrix(c_rows, c_cols, c[0]);
}