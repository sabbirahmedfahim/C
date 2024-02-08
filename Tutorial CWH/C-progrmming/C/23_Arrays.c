/*
// what is an array
A one-dimentional array is like a list (vectors)
A two-dimentional array is like a table (matrices)
// why do we need arrays?
code that  use arrays is sometimes more organized and readable.
if you to store the marks in  a test of 56 students, creating 56 variables will make program look clutttered and messy.
solution  to this is  arrays!
// advantage of arrays
it is used to reprent multiple data items of same type by using only single name
accessing an item in a given array is very fast!
2 dimentional arrays makes it easy in mathematical applications as it is used to  represent a matrix
// syntax for declaring and initializing array
Data_type name[size] like int marks[200]
Data_type name[size] =  {x, y, z, ......}; //size not required in this case!
data_type name[rows][columns]; //for 2-d arrays 0
*/

// ONE
//Its better if you understand first TWO and THREE. then come here

#include <stdio.h>

int main()
{
   int marks[4];

   marks[0] = 34;
   printf("Marks of student 1 is %d\n", marks[0]);
   marks[0] = 54;
   marks[1] = 4;
   marks[2] = 44;
   marks[3] = 28;
   printf("Marks of student 1 is %d\n", marks[0]);

   return 0;
}


// TWO

// #include <stdio.h>

// int main()
// {
//    int marks[4] = {45, 234, 2, 3};
//    // [4] indicates there are 4 column. but it is not nesserey to write the number when it is only row or column.

//    for (int i = 0; i < 4; i++) //its counts o to 3 as if i<4
//    {
//       printf("Enter the value of %d element of the array is %d\n", i, marks[i]);

//    }


//    return 0;
// }


// THREE
// 2D array

// #include <stdio.h>

// int main()
// {
//    int marks[2][4] = {{45, 234, 2, 3},
//                         {3, 2, 3, 3}};
//    // The output will be very interesting. It counts matrices starting from 0, not 1.

//    for (int i = 0; i < 2; i++)
//    {
//       for (int j = 0; j < 4; j++)
//       {
//          printf("%d ", marks[i][j]); 
//          // The marks[i][j] part accesses the element in the 2D array at the current row i and column j.
//       }
//       printf("\n");
//    }
//    return 0;
// }
