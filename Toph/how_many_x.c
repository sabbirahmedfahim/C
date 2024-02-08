// what?
#include <stdio.h>

int main()
{
   int n; // size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int myArray[n]; // declaring an array of size n

    // Taking input for the array elements
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1 );
        scanf("%s", &myArray[i]); //values stored here
    }
   int count = 0;
   int length = sizeof(myArray) / sizeof(myArray[0]);
//    printf("%d", length);
   char X;
   int i;
   for (int i = 0; i < length; i++)
   {
    if (myArray[i] == X)
    {
        count = count + 1;
        printf("%d ", count);
    } 
    }
    if (myArray[i] != X)
    {
        printf("Invalid input");
    }

   return 0;
}


