#include <stdio.h>

int main()
{
    int n, reverse = 0, division;
    scanf("%d", &n);
    int num = n;
    while (n != 0) { division = n % 10; 
        reverse = reverse * 10 + division;
        n = n / 10;
    } 
    if (num == reverse)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
