#include<stdio.h>
int main()
{
    char ch, stng[100], stng_sen[100];
    scanf("%c %s\n", &ch, &stng);
    fgets(stng_sen, 100, stdin);
    
    printf("%c\n%s\n%s\n", ch, stng, stng_sen);
    return 0;
}