#include <stdio.h> 
int main()
{
    //add details 
    float a, b, c, d, sol1, sol2, sol3, sol4; 
    a=30.0;
    b=10.0;
    c=5.0; 
    d=15.0; 
    sol1=(a+b)*c/d; 
    sol2=((a+b)*c)/d; 
    sol3=a+(b*c)/d; 
    sol4=(a+b)*(c/d);
    printf("(a+b)c/d = %.2f\n", sol1); 
    printf("((a+b)c)/d = %.2f\n", sol2); 
    printf("a+(bc)/d = %.2f\n", sol3); 
    printf("(a+b)(c/d) = %.2f\n", sol4); 
    return 0; 
}