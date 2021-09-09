#include <stdio.h>

void main(){
    //add details
    int array1[10][10], array2[10][10];
    int temp;
 
    int m, n;
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the co-efficents of the matrix \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d,", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
    }
    int a, b;
    printf("Enter the numbers of two rows to be exchanged \n");
    scanf("%d %d", &a, &b);
    for (int i = 0; i < m; ++i)
    {
        c = array1[a][i];
        array1[a][i] = array1[b][i];
        array1[b][i] = c;
    }
    int p, q;
    printf("Enter the numbers of two columns to be exchanged \n");
    scanf("%d %d", &p, &q);
    printf("The given matrix is \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf(" %d", array2[i][j]);
        printf("\n");
    }
    for (int i = 0; i < n; ++i)
    {
        r = array2[i][p];
        array2[i][p] = array2[i][q];
        array2[i][q] = r;
     }
    printf("The matix after interchanging the two rows(in the original matrix) \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf(" %d", array1[i][j]);
        }
        printf("\n");
     }
    printf("The matix after interchanging the two columns(in the original matrix) \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf(" %d", array2[i][j]);
        printf("\n");
    }
}
