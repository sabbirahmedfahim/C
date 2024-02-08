/*Create a program that asks for your age and tells you if you're
 eligible to get a NID card.*/
// Done

#include <stdio.h>
int main() {
    int age;
    printf("HEy, Do you mind sharing your age with me?: ");
    scanf("%d", &age);
    if (age>=18)
    {
        printf("You are eligible to get a NID card");
    } else
    {
        printf("Sorry, You are NOT eligible to get a NID card");
    }
    
    
}