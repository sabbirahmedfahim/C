
// messed up 
#include <stdio.h>

int main()
{
   int T;
   scanf("%d", &T);
   for (int i = 0; i < T; i++)
   {
    int a;
    int divOfa;
    int modOfa;
    int count = 1;
    scanf("%d", &a);
    if (a==2)
    {
    printf("%d\n", a);

    } else if (a%2==0)
    {
        for (int i = 0; i < a; i++)
        {
            while (a>count)
            {
                if (count>a)
            {
                break;
            } else if (a>count)
            {
                count = count*2;
            }
            }
                                   
        }
        
        printf("%d\n", count);
    }
    
    else
    {
        modOfa = a%2;
        divOfa = a/2;
        printf("%d\n", modOfa+divOfa);
    }
    
    
   }
   
   
   return 0;
}


