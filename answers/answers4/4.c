#include <stdio.h>

int getFactorSum(int n)
{
    int factorSum = 0;
    for (int i = 1; i <= n-1; i++)
    {
        if (n % i == 0)
            factorSum += i;
    }
    return factorSum;
}


int main(){
    //add details
    int n;
    printf("enter an integer: ");
    scanf("%d", &n);
    if (n == getFactorSum(n))
        printf("the given integer is a perfect number");
    else
        printf("the given integer is not a perfect number");
    return 0;
}