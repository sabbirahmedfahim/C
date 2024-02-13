
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n>=0 && n<=100)
    {
        if (n>=0 && n<=24)
        {
            printf("F");
        } if (n>=25 && n<=45)
        {
            printf("E");
        } if (n>=46 && n<=50)
        {
            printf("D");
        } if (n>=51 && n<=60)
        {
            printf("C");
        } if (n>=61 && n<=80)
        {
            printf("B");
        } if (n>=81 && n<=100)
        {
            printf("A");
        }
          
    }
      
   return 0;
}
