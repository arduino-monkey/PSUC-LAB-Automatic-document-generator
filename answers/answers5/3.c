#include <stdio.h>

int main(){
    //add details
    int n, temp;
    int arr[100];
    char order;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    printf("enter ascending(a) or descending(d): ");
    scanf(" %c", &order);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            switch (order)
            {
                case 'a':
                    if (arr[j] < arr[i])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                    break;
                case 'd':
                    if (arr[j] > arr[i])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                    break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}