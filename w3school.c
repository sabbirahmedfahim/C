// //ONE
//taking input
// #include <stdio.h>
// int main()
// {
//    int a, b;
//    printf("Enter a: ");
//    scanf("%d", &a);
//    printf("Enter b:");
//    scanf("%d", &b);
//    printf("You have entered %d and %d as a and b", a, b);
//    return 0;

// }

// //TWO
//taking multiple inputs at once
// #include <stdio.h>
// int main()
// {
//    int a, b;
//    printf("Enter a and b: ");
//    scanf("%d %d", &a, &b);
//    printf("You have entered %d and %d as a and b", a, b);
//    return 0;

// }

// //THREE
//Taking multiple inputs at once
// #include <stdio.h>
// int main()
// {
//    int a, b;
//    printf("Enter a and b: ");
//    scanf("%d %d", &a, &b);
//    printf("You have entered %d and %d as a and b\n", a, b);
//    printf("summation of a, b is a+b = %d\n", a+b);
//    return 0;

// }

// //FOUR
// summation, substrac, multipli, division
// #include <stdio.h>
// int main()
// {
//    int a, b;
//    printf("Enter a and b: ");
//    scanf("%d %d", &a, &b);
//    printf("You have entered %d and %d as a and b\n", a, b);
//    printf("summation of a, b is a+b = %d\n", a+b);
//    printf("negation of a, b is a-b = %d\n", a-b);
//    printf("multiplicatin of a, b is a*b = %d\n", a*b);
//    printf("division of a, b is a/b = %d\n", a/b);
//    return 0;

// }

// //FIVE
//General method
// #include <stdio.h>
// int main()
// {
//    int a;
//    printf("Enter the number to multiply: ");
//    scanf("%d", &a);
//    printf("%d X 1 = %d\n", a, a*1);
//    printf("%d X 2 = %d\n", a, a*2);
//    printf("%d X 3 = %d\n", a, a*3);
//    printf("%d X 4 = %d\n", a, a*4);
//    printf("%d X 5 = %d\n", a, a*5);
//    printf("%d X 6 = %d\n", a, a*6);
//    printf("%d X 7 = %d\n", a, a*7);
//    printf("%d X 8 = %d\n", a, a*8);
//    printf("%d X 9 = %d\n", a, a*9);
//    printf("%d X 10 = %d\n", a, a*10);
//    return 0;

// }

//SIX
//Addition
// #include <stdio.h>

// int main()
// {
//    int a = 5, b = 10;
//    printf("%d", a+b);

//    return 0;
// }

//SEVEN
//only show one digit after the decimal point:
// #include <stdio.h>
// int main(){
//     float myScore = 9.5;
//    printf("%.1f", myScore);
//    return 0;
// }

//EIGHT
//while loop
// #include <stdio.h>

// int main()
// {
//     int i = 1;
//     while (i<6)
//     {
//         printf("%d ", i);
//         // i +=1;
//         i++;
//     }
    

//    return 0;
// }

//NINE
//For loop
// #include <stdio.h>

// int main()
// {
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", i);
//     }
    

//    return 0;
// }

//TEN
//Namota
// #include <stdio.h>

// int main() {
//   int number;
//   printf("enter: ");
//   scanf("%d", &number);
//   int i;

//   // Print the multiplication table for the number 2
//   for (i = 1; i <= 10; i++) {
//     printf("%d x %d = %d\n", number, i, number * i);
//   }

//   return 0;
// }


//ELEVEN
//Array == List ?
// #include <stdio.h>
// int main() {
//     int Meow[] = {34, 35, 57, 3};
//     printf("%d", Meow[3]);

//     return 0;
// }

//TWELVE
//Loop Through an Array

// #include <stdio.h>
// int main() {
//     int Meow[] = {4, 45, 65, 346, 76};
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d ", Meow[i]);
//     }
    
//THIRTEEN
//Two-Dimensional Arrays
// #include <stdio.h>
// int main() {
//     int MeowTwoDimen[2][3] = {{3, 6, 4}, {64, 34, 4}};
//     // 2 ta raw, 3 ta column eita buja gese?

//     //Access the Elements of a 2D Array
//     printf("%d", MeowTwoDimen[0][2]);
    

//     return 0;
// }

//FOURTEEN
//Change Elements in a 2D Array
// #include <stdio.h>

// int main()
// {
//     int boOm[3][2] = {{4, 7}, {76, 3}, {75, 23, 54}};
//     boOm[2][0] = 5;
//     printf("%d", boOm[2][0]);


//    return 0;
// }

//SIXTEEN
//Loop Through a 2D Array
// ONE
// i++ means i= i+1

// #include <stdio.h>
// int main() {
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", i);
//     }
    
//     return 0;
// }


//SEVENTEEN
//Loop Through a 2D Array
// #include <stdio.h>
// int main()
// {
//     int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
//     for (int i = 0; i < 2; i++)
//     {
//        for (int j = 0; j < 3; j++)
//        {
//         printf("%d ", matrix[i][j]);
//        }
       
//     }
    

//     return 0;

// }

//EIGHTEEN
//string
// #include <stdio.h>
// int main() {
//     char greetings[] = "Hello Duniya!";
//     printf("%s", greetings);
//     return 0;
// }

//NINETEEN
//acess string 
//Note that we have to use the %c format specifier to print a single character.
// #include <stdio.h>
// int main() {
//     char greetings[] = "Hello Duniya!";
//     //fun fact: C string doesn't count spaces
//     printf("%c", greetings[6]);
//     return 0;
// }

//TWENTY
#include <stdio.h>

int main()
{
    // int something[] = "Man is Mortal, Women?";
    char something[] = "Man is Mortal, Women?";
    for (int i = 0; i < 8; i++)
    {
        printf("%c", something[i]);
    }
    

   return 0;
}

