#include <stdio.h>
#include <stdlib.h>

int main(){
    //add details
    int arr[100] = {1,2,3,4};
    int number, idx, n = 4;

    printf("original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("enter the number and index to insert it: ");
    scanf("%d %d", &number, &idx);

    while (idx > n){
        printf("the index value can't be greater than the length of the arr, try again\n");
        printf("enter the number and index to insert it: ");
        scanf("%d %d", &number, &idx);
    }

    n++;
    for (int i = n-1; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[idx] = number;
    printf("updated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}