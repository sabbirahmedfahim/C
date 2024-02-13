//taking input from the user and store it in an array element.
#include <stdio.h>
int main() {
    int n; // size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int myArray[n]; // declaring an array of size n

    // Taking input for the array elements
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1 );
        scanf("%d", &myArray[i]); //values stored here
    }

    // Displaying the array elements
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]); //prints stored values
    }

    return 0;
}

//array basics— getting length, sum, avg
// #include <stdio.h>
// int main() {
//     int marks[] = {38, 34, 84, 54, 50, 55, 70, 84};
//     float avg, sum = 0;
//     int  length = sizeof(marks) / sizeof(marks[0]); //getting the  length of  the  array
//     //like len of list in python
//     for (int i = 0; i < length; i++)
//     {
//         sum = sum + marks[i];
//     }
//     avg = sum/length;
//     printf("The average marks is %.2f", avg);

//     return 0;
// }
