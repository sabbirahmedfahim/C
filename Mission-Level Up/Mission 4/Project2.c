// Input a string that return you the reverse version
//[FIXED] It doesn't count multiple words as if we are taking a single-word input. How to fix it?
// Done

// ONE
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char Name[100]; //remember bracket
//     printf("What is your name: ");
//     scanf("%s", &Name);
//     printf("What if we reverse your name? it's %s", strrev(Name));
//     //used strrev function. i wanna make the code without using function to a strong basic

//     return 0;
// }

// TWO
//taking string input with space
#include <stdio.h>
#include <string.h>
int main() {
    char Name[100]; //remember bracket
    printf("What is your name: ");
    gets(Name);
    printf("What if we reverse your name? it's %s", strrev(Name));
    //used strrev function. i wanna make the code without using function to a strong basic

    return 0;
}


