#include <stdio.h>

int main(){
    //add details
    int n, temp, last_dig, sum = 0;
    printf("enter an integer: ");
    scanf("%d", &n);
    temp = n;
    for (;;)
    {
        if (temp <= 9)
            break;
        else
            temp = sum;
        for (;;)
        {
            if (temp == 0)
                break;
            last_dig = temp % 10;
            sum += last_dig;
            temp /= 10;
        }
    }
    printf("%d", sum);
    return 0;
}