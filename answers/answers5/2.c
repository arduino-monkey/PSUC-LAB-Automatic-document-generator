#include <stdio.h>

int isPrime(int n)
{
    for (int i=2; i <= n/2; i++)
    {
        if (n%i == 0)
            return 0;
    }
    return 1;
}

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
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }
}