
// done 
#include <stdio.h>

int main()
{
int T;
scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int reverse = 0;
        int a;
        scanf("%d", &a);
        while (a!=0)
    {
        int remainder = a%10; 
        reverse = reverse*10 + remainder;  
        a = a/10; 
    } printf("%d\n", reverse);
    }
    
   return 0;
}
