#include <stdio.h>

int main(){
    //add details
    int n;
    int arr[100];
    printf("enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    printf("the smallest number is: %d\n", smallest);
    printf("the largest number is: %d", largest);
}
