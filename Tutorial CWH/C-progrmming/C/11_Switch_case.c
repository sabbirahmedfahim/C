/*
Rules for Swich Statement
1. Switch expression → must be an int or char
2. Case must be an integer or a character
3. Case must come inside switch
4. break in not must
*/

// ONE

// #include <stdio.h>

// int main()
// {
//     int age;
//    printf("Enter your age\n");
//    scanf("%d", &age);

//    switch (age)
//    {
//    case 3:
//     printf("The age is 3");
//     break;
   
//    case 13:
//     printf("The age is 13");
//     break;

//     case 23:
//     printf("The age is 23");
//     break;

//    default:
//    printf("The age is  not 3, 13, 23");
//     break;
//    }

//    return 0;
// }

// TWO
// What if we do not use break for some cases

// #include <stdio.h>

// int main()
// {
//     int age;
//    printf("Enter your age\n");
//    scanf("%d", &age);

//    switch (age)
//    {
//    case 3:
//     printf("The age is 3\n");
//     // break;
   
//    case 13:
//     printf("The age is 13\n");
//     // break;

//     case 23:
//     printf("The age is 23\n");
//     break;

//    default:
//    printf("The age is  not 3, 13, 23");
//     break;
//    }

//    return 0;
// }


// THREE
// What if we do not use break in any of the cases?

// #include <stdio.h>

// int main()
// {
//     int age;
//    printf("Enter your age\n");
//    scanf("%d", &age);

//    switch (age)
//    {
//    case 3:
//     printf("The age is 3\n");
//     // break;
   
//    case 13:
//     printf("The age is 13\n");
//     // break;

//     case 23:
//     printf("The age is 23\n");
//     // break;

//    default:
//    printf("The age is  not 3, 13, 23");
//     // break;
//    }

//    return 0;
// }


// FOUR
//Nested switch

#include <stdio.h>

int main()
{
    int age, marks;
   printf("Enter your age\n");
   scanf("%d", &age);

   printf("Enter your marks\n");
   scanf("%d", &marks);

   switch (age)
   {
   case 3:
    printf("The age is 3\n");
    switch (marks)
    {
    case 40:
        printf("Your marks are 40");
        break;
    
    default:
    printf("Your marks are not 40");
    }
    break;
   
   case 13:
    printf("The age is 13\n");
    break;

    case 23:
    printf("The age is 23\n");
    break;

   default:
   printf("The age is  not 3, 13, 23");
    break;
   }

   return 0;
}