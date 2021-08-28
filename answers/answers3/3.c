#include <stdio.h>

int main(){
    //add details
    int num, temp_num, last_dig, res=0;
    printf("enter an integer: ");
    scanf("%d", &num);
    temp_num = num;
    while (num)
    {
        last_dig = num % 10;
        res += last_dig * last_dig * last_dig;
        num /= 10;
    }
    if (temp_num == res)
        printf("the given integer is an armstrong number");
    else
        printf("the given integer is not an armstrong number");
    return 0;
}