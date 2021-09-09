#include <stdio.h>

int find(int arr[], int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    //add details
    int arr[100] = {1,2,3,4,5,6};
    int number, idx, n = 6;

    printf("original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("enter the number to delete: ");
    scanf("%d", &number);
    
    idx = find(arr, number, n);
    while (idx == -1)
    {
        printf("the number you entered doesn't exist\n");
        printf("enter the number to delete: ");
        scanf("%d", &number);
        idx = find(arr, number, n);
    }

    for (int i = idx; i < n; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;
    printf("updated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}