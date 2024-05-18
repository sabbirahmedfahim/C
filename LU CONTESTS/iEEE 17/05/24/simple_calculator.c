#include<stdio.h>
#include<math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    getchar();
    char c;
    int ans;
    scanf("%c", &c);

    switch (c)
    {
    case '+':
        ans = floor(a+b);
        break;
    case '-':
        ans = floor(a-b);
        break;
    case '*':
        ans = floor(a*b);
        break;
    case '/':
        ans = floor(a/b);
        break;
    
    default:
        break;
    }

    printf("%d", ans);
    
    return 0;
}