#include<stdio.h>
int main()
{
    int a = 34;
    int* ptra = &a;
    printf("Size of int pointers:\n");
    printf("%d\n", ptra);
    printf("%d\n", ptra+1); //look the differences
    printf("%d\n", ptra+2); //look the differences
    printf("%d\n", ptra-2); //look the differences
    printf("\n");
    printf("Size of char pointers:\n");
    char b = 't';
    char* pointR = &b;
    printf("%d\n", pointR);
    printf("%d\n", pointR+1); //look the differences
    printf("%d\n", pointR+2); //look the differences
    printf("\n");
    printf("Size of array pointers:\n");
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", &arr[0]);
    printf("%d\n", &arr); //look the differences
    printf("%d\n", &arr[1]); //look the differences
    printf("%d\n", &arr[2]); //look the differences
    printf("\n");
    printf("Values of at address of array pointers:\n");
    printf("%d\n", *(&arr[0]));
    printf("%d\n", *(&arr)); //look the MISTAKE
    printf("%d\n", *(arr)); //look the differences
    printf("%d\n", *(&arr[1])); //look the differences
    printf("%d\n", *(&arr[2])); //look the differences

    
    return 0;
}