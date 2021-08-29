#include <stdio.h>

int main()
{
    //add details
    int n, flag = 0;
    printf("break statement in for loop\n");
    printf("enter n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        } 
    }
    if (flag == 0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);

    printf("\ncontinue statement in for loop\n");
    for (int i = 0; i < 8; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
}