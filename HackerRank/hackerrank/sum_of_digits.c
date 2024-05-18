#include <stdio.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum = 0;
    int div = 0;
    while (n!=0)
    {
        div = n%10;
        sum+=div;
        n = n/10;
    }
    printf("%d", sum);
    

    return 0;
}