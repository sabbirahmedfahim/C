#include <stdio.h>
#include <string.h>
int main() {
    char Name[100];
    printf("What is your name: ");
    scanf("%s", &Name);
    printf("What if we reverse your name? it's %s", strrev(Name));

    return 0;
}