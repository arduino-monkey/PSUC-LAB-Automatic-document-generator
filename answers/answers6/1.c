#include <stdio.h>
#include <stdlib.h>

int main(){
    //add details
    int a[4][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9},
                   {10, 11, 12}};

    int a_rows = sizeof(a) / sizeof(a[0]);
    int a_cols = sizeof(a[0]) / sizeof(a[0][0]);

    if (a_rows != a_cols)
    {
        printf("not symmetric");
    }
    else
    {
        for (int i = 0; i < a_rows; i++)
        {
            for (int j = 0; j < a_cols; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    printf("not symmetric ");
                    exit(0);
                }
            }
        }
        printf("symmetric matrix");
    }   
}