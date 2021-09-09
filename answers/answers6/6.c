#include <stdio.h>

int main(){
    //add details
    int a[3][3] = {{3, 2, 3},
                   {4, 3, 4},
                   {5, 4, 4}};


    int a_rows = sizeof(a) / sizeof(a[0]);
    int a_cols = sizeof(a[0]) / sizeof(a[0][0]);

    int number, count = 0;
    printf("enter the number to search: ");
    scanf("%d", &number);
    for (int i = 0; i < a_rows; i++)
    {
        for (int j = 0; j < a_cols; j++)
        {
            if (a[i][j] == number)
            {
                count++;
            }
        }
    }
    printf("the number has occured %d times", count);
}