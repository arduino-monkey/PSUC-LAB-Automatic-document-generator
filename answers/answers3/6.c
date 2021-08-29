#include <stdio.h>

int main(){
    //add details
    int i = 1;
    printf("break in while loop\n");
    int n;
    while (1)
    {
        printf("enter an integer: ");
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
    }

    printf("break in do-while loop\n");
    i = 1;
    do 
    {
        if (i == 4)
        {
            break;
        }
        printf("%d ", i);
        i++;
    }while(i <= 10);

    printf("\ncontinue statement in while loop\n");
    i = 0;
    while (i < 10)
    {
        if (i != 7)
        {
            printf("%d ", i);
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
    
    printf("\ncontinue statement in do-while loop\n");
    i = 1;
    do
    {
      if (i==3)
      {
        i++;
        continue;
      }
      printf("%d ", i);
      i++;
   }while(i<7);
}