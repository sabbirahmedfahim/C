/*Implement a Bkash like password protection system. 
Declare a variable named password to store your real password.
When you run the program and input a password, 
for each incorrect attempt, it will display an error message
and show the remaining attempts. If the attempts reach or exceed 3,
it will notify you that the account is blocked. On a valid password
entry, reset the attempts to 0 and confirm that it's a valid input. ⭐*/

#include <stdio.h>
int main() {
    const int password = 4837;
    int userInput;
    one: 
    scanf("%d", &userInput);
    if (password == userInput)
    {
        printf("Okey\n");
    }
    else
    {
        printf("error! You Have 2 attempt left\n");
    }
    two: 
    scanf("%d", &userInput);
    if (password == userInput)
    {
        printf("Okey\n");
        goto one;
    }
    else
    {
        printf("error! You Have 1 attempt left\n");
    }
    three:
     scanf("%d", &userInput);
    if (password == userInput)
    {
        printf("Okey");
        goto one;
    }
    else
    {
        printf("Your Account Has Been Blocked");
    }

    
    return 0;
    

}