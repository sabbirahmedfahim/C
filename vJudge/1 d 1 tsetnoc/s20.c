
// done
#include <stdio.h>
int main() 
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int a, b;
        scanf("%d %d", &a,&b);
        if (a<b)
        {
            printf("<\n");
        } else if (a>b)
        {
            printf(">\n");
        } else if (a==b)
        {
            printf("=\n");
        }
        
    }
    return 0;
}
