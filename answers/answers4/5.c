#include <stdio.h>

int main(){
    //add details
    int n, temp, last_dig, sum = 0;
    printf("enter an integer: ");
    scanf("%d", &n);
    temp = n;
    for (;;)
    {
        for (;;)
        {
            if (temp == 0)
                break;
            last_dig = temp % 10;
            sum += last_dig;
            temp /= 10;
        }
        if (sum <= 9)
            break;
        else
        {
            temp = sum;
            sum = 0;
        }
    }
    printf("%d ", sum);
    return 0;
}