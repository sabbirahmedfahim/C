// // C Library: <string.h>
// // REMEMBER TO ADD New Library Called STRING

// // strcat() //combine two strings
// // strrev() //reverse
// // strlen() //show length
// // strcpy() //let's say: strcpy(s1,s2)
// // // that means copied s2 to s1
// // strcmp() //compare between two strings

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr1[] = "sabbir";
//     char arr2[] = "ahmed";
//     char arr3[] = "fahim";
//     // strcat(arr1, arr2);
//     printf("1. strcat() function:\n");
//     puts(strcat(arr1, arr2)); // so this is how strcat works
//     printf("\nchanges after strrev() runs:\n");
//     printf("%s", arr1);     // interesting #THINK
//     printf("\n%s\n", arr2); // interesting #THINK
//     puts(arr1);             // this is alternative way to print the value of strrev
//     printf("\n2. strlen() function:\n");
//     printf("%d\n", strlen(arr2));
//     char arr4[45];
//     printf("\n3. strcpy() function:\n");
//     strcpy(arr4, strcat(arr1, arr3));
//     puts(arr4);
//     printf("\n4. strrev() function:\n");
//     printf("%s\n", strrev(arr4)); 
//     char arr5[] = "apple", arr6[] = "book", arr7[] = "dog";
//     printf("\n5. strcmp() function:\n");
//     //I hafta gain more knowledge to understand how||why -1,0,1 comes
//     printf("%d\n", strcmp(arr5, arr6));
//     printf("%d\n", strcmp(arr5, arr5));
//     printf("%d\n", strcmp(arr7, arr5));

//     return 0;
// }

// Quick Quiz
#include<stdio.h>
#include<string.h> //first time forget to input string library
int main()
{
    char friend1[66], friend2[66];
    scanf("%s %s", &friend1, &friend2);
    printf("%s is a friend of %s\n", friend1, friend2);
    puts(strcat(friend1, friend2));
    
    return 0;
}