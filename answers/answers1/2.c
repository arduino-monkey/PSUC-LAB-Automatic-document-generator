#include <stdio.h>
int main()
{
    //add details
    int a,b,sum,product,diff,quotient,remainder; 
    printf("Enter 1st number : "); 
    scanf("%d",&a); 
    printf("Enter 2nd number : "); 
    scanf("%d",&b);
    sum=a+b;
    product=a*b; 
    diff=a-b; 
    quotient=a/b; 
    remainder=a%b; 
    printf("Sum is : %d\n",sum);
    printf("Product is : %d\n",product);
    printf("Difference is : %d\n",diff); 
    printf("Quotient is : %d\n",quotient); 
    printf("Remainder is : %d\n",remainder);
    return 0;
}