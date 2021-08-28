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
    int num, prime_count = 0, composite_count = 0;
    do
    {
        printf("enter an integer: ");
        scanf("%d", &num);
        if (num == 1 || num == -1)
            continue;
        if (isPrime(num))
            prime_count += 1;
        else
            composite_count += 1;

    } while(num != -1);

    printf("prime number count = %d\n", prime_count);
    printf("composite number count = %d", composite_count);
    return 0;
}