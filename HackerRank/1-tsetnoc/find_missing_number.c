
#include <stdio.h>

int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    int missingNumber = D-A-B-C;
    printf("%d", missingNumber);
   return 0;
}
