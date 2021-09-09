#include <stdio.h>
#include <math.h>

int main(){
    //add details
    int n = 3;
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int trace = 0;
    int norm = 0;
    for (int i = 0; i < n; i++)
    {
        trace += a[i][i];
    }
    norm = sqrt(trace);

    printf("trace: %d norm: %d", trace, norm);
}