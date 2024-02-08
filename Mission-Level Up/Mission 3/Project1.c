/*Create an easy calculator program capable of addition, subtraction, multiplication, 
and division. Implement the functionality by passing data through parameters in functions.*/
// Done

#include <stdio.h>
float addition (float a, float b) {
    return a+b;
}
float subtraction (float a, float b) {
    return a-b;
}
float multiplication (float a, float b) {
    return a*b;
}
float division (float a, float b) {
    return a/b;
}

int main()
{
//    printf("Addition of %f and %f is %.2f\n", a, b, addition(5,6)); //why error?
   printf("Addition: %.2f\n", addition(5,6));
   printf("Substraction: %.2f\n",  subtraction(5,6));
   printf("Multiplication: %.2f\n", multiplication(5,6));
   printf("Division: %.2f\n", division(5,6));
   return 0;
} 



//learing function and how it works through debugging errors
// #include <stdio.h>

// //  void SayHey(char name, int roll) { //added * before name
//  void SayHey(char *name, int roll) {
//         printf("Hey %s, roll number %d\n", name, roll);
//     }

// int main()
// {
//     // SayHey(Rahim, 45); //added brackets for strings IT'S MUST
//     SayHey("Ashik Elahi", 546);
//     SayHey("Ashraful", 236);
//    return 0;
// }

