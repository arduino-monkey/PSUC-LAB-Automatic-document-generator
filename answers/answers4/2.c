#include <stdio.h>

int main(){
    //add details
    int n, current_number = 1;
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", current_number);
            current_number++;
        }
        printf("\n");
    }
    return 0;
}