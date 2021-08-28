#include <stdio.h>

int main(void)
{
    //add details
    int a, b, c, temp, min;
    printf ("Enter three nos. separated by spaces: ");
    scanf ("%d%d%d", &a, &b, &c);
    temp = (a < b)    ? a : b;
    min =  (c < temp) ? c : temp;
    printf ("The Minimum of the three is: %d", min);
    return 0;
}