#include<stdio.h>
#include<math.h>

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    //add details
    
    int degrees, n, sign = 1;
    printf("Enter n and angle(in degrees): ");
    scanf("%d %d", &n, &degrees);
    
    float radians = degrees * (3.14159 / 180.0);
    float sum = 0;

    for (int power = 1; power <= n * 2; power += 2)
    {
        sum += sign * (pow(radians, power) / factorial(power));
        sign *= -1;
    }
    printf("Sin(%d) = %f", degrees, sum);
    return 0;
}