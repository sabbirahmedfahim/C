// Input a string that return you the reverse version
//It doesn't count multiple words as if we were entering a single-word input.
//  This issue could be resolved.
#include <stdio.h>
#include <string.h>
int main() {
    char Name[100]; //remember bracket
    printf("What is your name: ");
    scanf("%s", &Name);
    printf("What if we reverse your name? it's %s", strrev(Name));

    return 0;
}