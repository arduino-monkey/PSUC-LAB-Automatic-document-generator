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

    int a_rows = sizeof(a) / sizeof(a[0]);
    int a_cols = sizeof(a[0]) / sizeof(a[0][0]);

    int f = 0;
    int l = a_rows - 1;

    int temp = 0;
    for (int i = 0; i < a_rows; i++)
    {
        temp = a[i][f];
        a[i][f] = a[i][l];
        a[i][l] = temp;
        f++;
        l--;
    }
    printMatrix(a_rows, a_cols, a[0]);
}