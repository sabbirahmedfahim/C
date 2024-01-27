/*
The `while (1)` construct is a common way to create an infinite loop in C or C++ programs. In this context, it means that the loop will keep running indefinitely until it is explicitly exited using the `break` statement. The reason for using `while (1)` in this code is to create a loop that continues until the user decides to quit the program.

Inside the loop, the program...
*/
// this code is kinda large but it seems easy when solved

#include <stdio.h>
int main()
{
    char input;
float kmsToMiles = 0.621371;
float inchesToFoot = 0.0833333;
float cmsToInches = 0.393701;
float poundToKgs = 0.453592;
float inchesToMeters = 0.0254;
float first, second; 
while (1)
{
    printf("Enter the input character. q to quit\n    1. kms to miles\n    2. inches to foot\n    3. cms to inches\n    4. pound to kgs\n    5. inches to meters\n");
    scanf(" %c", &input);
    // printf("The character is '%c'", input);

    switch (input)
    {
    case 'q':
    goto end;
        break;

    case '1':
    printf("Enter the quantity in terms of first unit\n");
    scanf("%f", &first);
    second = first * kmsToMiles;
    printf("%.2f kms is quual to %.2f miles \n\n\n", first, second);
    break;
    case '2':
    printf("Enter the quantity in terms of first unit\n");
    scanf("%f", &first);
    second = first * inchesToFoot;
    printf("%.2f inches is quual to %.2f foot \n", first, second);
    break;
    case '3':
    printf("Enter the quantity in terms of first unit\n");
    scanf("%f", &first);
    second = first * cmsToInches;
    printf("%.2f cms is quual to %.2f inches \n", first, second);
    break;
    case '4':
    printf("Enter the quantity in terms of first unit\n");
    scanf("%f", &first);
    second = first * poundToKgs;
    printf("%.2f pounds is equal to %.2f kgs\n", first, second);
    break;
    case '5':
    printf("Enter the quantity in terms of first unit\n");
    scanf("%f", &first);
    second = first *  inchesToMeters;
    printf("%.2f inches is quual to %.2f meters\n", first, second);
    break;

    default:
        break;
    }
}

    end:
    printf("Quittng the program...");
    return 0;
}
