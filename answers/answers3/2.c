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
    int upper_limit, lower_limit;
    //add details
    printf("enter the lower and the upper limit: ");
    scanf("%d %d", &lower_limit, &upper_limit);
    int num = lower_limit;
    printf("all prime numbers between %d and %d are: ", lower_limit, upper_limit);
    while (num != upper_limit)
    {
        if (isPrime(num))
            printf("%d ", num);
        num += 1;
    }
    return 0;
}