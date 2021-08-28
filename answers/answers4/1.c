#include <stdio.h>

int main(){
    //add details
    int k, n;
    printf("enter n and k: ");
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}