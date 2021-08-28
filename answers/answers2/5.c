#include <stdio.h>

int main(){
    //add details
    int x, y;
    printf("enter the value of x: ");
    scanf("%d", x);
    if (x > 0)
        y = 1;
    else if (x < 0)
        y = -1;
    else
        y = 0;
    printf("y = %d\n", y);
}