#include <stdio.h>

int factorial(int n){
    int res = 1;
    while (n)
    {
        res *= n;
        n--;
    }
}

int main(){
    //add details
    int num, last_dig, res = 0;
    printf("enter an integer: ");
    scanf("%d", &num);
    int temp_num = num;
    while (num)
    {
        last_dig = num % 10;
        res += factorial(last_dig);
        num /= 10;
    }
    if (res == temp_num)
        printf("the given integer is a strong number");
    else
        printf("the given integer is not a strong number");
    return 0;
}