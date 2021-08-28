#include <stdio.h>
int main(){
    //add details
    int num, last_dig, rev_num = 0;
    printf("enter an integer : ");
    scanf("%d", &num);
    int num_copy = num;
    while (num)
    {
        last_dig = num % 10;
        rev_num = rev_num * 10 + last_dig;
        num /= 10;
    }
    printf("reversed number: %d\n", rev_num);
    if (num_copy == rev_num)
    {
        printf("number is a palindrome");
    }
    else
    {
        printf("number is not a palindrome");
    }
    return 0;
}