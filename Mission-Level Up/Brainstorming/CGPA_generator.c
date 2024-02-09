/*Let's Build a program that takes your GPA & credit for individual courses & 
prints the ultimate CGPA*/

// Alhamdulillah Done

/*hints: Suppose you have 3 subjects
(S1 GP * S1 Credit)+(S2 GP * S2 Credit)+(S3 GP * S3 Credit) divided by 
S1 Credit+S2 Credit+S3 Credit
Equals to whole cgpa*/

// ONE (check TWO for clean code)
// #include <stdio.h>
// int main () {
//    int n;
//     printf("Total course: ");
//     scanf("%d", &n);
//     float cgpa[n];
//    //  int credits[n]; //data type error
//     float credits[n];
//    printf("Enter %d courses CGPA:\n", n);
//    for (int i = 0; i < n; i++)
//    {
//       printf("Course %d:", i+1);
//       scanf("%f", &cgpa[i]);
//    }
  
//    printf("Enter %d courses Credit:\n", n);
//    for (int i = 0; i < n; i++)
//    {
//       printf("Course %d:", i + 1);
//       scanf("%f", &credits[i]);
//    }

//    //MOST CRITICAL PART ***
//    float sum1 = 0;
//    float sum2 = 0;
//    for (int  i = 0; i < n; i++)
//    {
//       sum1 = sum1 + cgpa[i]*credits[i]; // *****
//       sum2 = sum2 + credits[i];
//    }

//    float myCGPA = sum1/sum2;
//    printf("Your CGPA is: %.2f\n", myCGPA);
   

//    //wrong codes
//    // for (int i = 0; i < n; i++)
//    // {
//    //    printf("cg %f ", cgpa[i]);
//    // }
//    // for (int i = 0; i < n; i++)
//    // {
//    //    printf("cR %f ", credits[i]);
//    // }
   
//    // //input stored. now calculating CGPA
//    // int length1 = sizeof(cgpa) / sizeof(cgpa[0]);
//    // int length2 = sizeof(credits) / sizeof(credits[0]);
//    // float sum1 = 0;
//    // float sum2 = 0;
//    // for (int i = 0; i < length1; i++)
//    // {
//    //    sum1 = sum1 + cgpa[i];
      
//    // } printf("%f ", sum1); //printf is out of the bracket bcz I should be print total sum
   
//    // for (int i = 0; i < length2; i++)
//    // {
//    //    sum2 = sum2 + credits[i];
//    // } printf("%f ", sum2);
   
//    // // int TotalCgCr; //data type error
//    // float yourCGPA = sum1/sum2;
//    // printf("Your CPGA is %.2f", yourCGPA);

//    return 0;
// }

//TWO
#include <stdio.h>
int main () {
   int n;
    printf("Total course: ");
    scanf("%d", &n);
    float cgpa[n];
    float credits[n];
   printf("Enter %d courses CGPA:\n", n);
   for (int i = 0; i < n; i++)
   {
      printf("Course %d:", i+1);
      scanf("%f", &cgpa[i]);
   }
  
   printf("Enter %d courses Credit:\n", n);
   for (int i = 0; i < n; i++)
   {
      printf("Course %d:", i + 1);
      scanf("%f", &credits[i]);
   }

   //MOST CRITICAL/CRUCIAL PART ***
   float sum1 = 0;
   float sum2 = 0;
   for (int  i = 0; i < n; i++)
   {
      sum1 = sum1 + cgpa[i]*credits[i]; // *****
      sum2 = sum2 + credits[i];
   }

   float myCGPA = sum1/sum2;
   printf("Your CGPA is: %.2f\n", myCGPA);

   return 0;
}


// THREE 
// failed attempt
// #include <stdio.h>
// int CgCr (int x, int y) {
//    scanf("%d %d", &x, &y);
//    return x*y;
// }
// int main()
// {
//    for (int i = 0; i < takeInput; i++)
//    {
//       /* code */
//    }
   
//    return 0;
// }


