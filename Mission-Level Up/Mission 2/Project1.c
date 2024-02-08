/*Create a program that prompts the user for 'n' and responds 
with "hi" 'n' times, using both a for loop and a while loop.*/
// Done

//for loop
// #include <stdio.h>
// int main() {
//     int m;
//     printf("Kitni 'hi' chahiye?: ");
//     scanf("%d", &m);
//     for (int n = 0; n < m; n++)
//     {
//         printf("hi ", n);
//     }
    
//     return 0;
// }


//while  loop
#include <stdio.h>
int main() {
    int m;
    printf("Kitni 'hi' chahiye?: ");
    scanf("%d", &m);
    int n = 0;
    while (m > n)
    {
        printf("hi ", m);
        n = n + 1;
    }      
}