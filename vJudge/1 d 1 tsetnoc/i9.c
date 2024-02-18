
// done
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int a;
        scanf("%d", &a);
        int initialA = a;
        while (a/10!=0)
    {    
        a = a/10; 
    } printf("%d\n", a+(initialA%10));
    }


   return 0;
}
