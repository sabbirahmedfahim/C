//failed. HARD

// ONE 
#include <stdio.h>

int main()
{
//    printf("Bismillah");
   int n;
   int score = 0;
   scanf("%d", &n);
      if (n>0 && n<=300)
   {
    if (n == 1)
    {
        printf("6");
    } else if (n == 2)
    {
        printf("10");
    } else if (n > 2 && n < 7)
    {
        for (int i = 0; i < 1; i++)  
   {
    score = score + 6;
    if (n ==1)
     {
        goto ONE;
     }
   }
   for (int i = 0; i < 1; i++)
   {
    score = score + 4;
    if (n ==2)
     {
        goto ONE;
     }
    
   }
   for (int i = 2; i < n; i++)
   {
    score = score + 3;
   }
   ONE: printf("%d", score);
   } else if (n > 6)
   {
    int TotalOver = n/6; //4
    int ExtraBalls = n%6; //5
    if (ballsInOver==0)
    {
        for (int i = 0; i < TotalOver; i++)
        {
            score = score + 
        }
        
    }
    


    
   }
   
    }

   return 0;
}



