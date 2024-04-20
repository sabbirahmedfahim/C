#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    char a[] = "sabbir";
    // char b[] = {'s', 'a', 'b', 'b', 'i', 'r'}; //not valid
    char b[] = {'s', 'a', 'b', 'b', 'i', 'r', '\0'};
    printf("%s\n", a);
    printf("%s\n", b);
    printf("\nUsing func for strong foundation:\n");
    printStr(b);
    printf("\n");
    printf("Taking multiple input using #gets:\n");
    char myStr[54];
    gets(myStr);
    printf("%s\n", myStr);
    printf("again :D\n");
    puts(myStr); //so we printed #gets in two ways at the same time


    return 0;
}