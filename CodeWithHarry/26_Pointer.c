// Pointer is a Variable which stores the address of another variable.
// int a = 5; //that means m percent of a(&a) is &a. Address of a.
// The address of operator '&' RETURNS THE ADDRESS OF A VARIABLE
// '*' is the dereference operator (also called indirection operator) USED TO
// GET THE VALUE AT A GIVEN ADDRESS

// for example: scanf takes the address, stores a value of variable

#include<stdio.h>
int main()
{
    printf("Lets learn about pointers\n");
    int a = 46;
    int* ptra = &a; //stored the address of a
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %x\n", *ptra); //printed address as hexadecimal
    //to know  more about %x, google it
    printf("\n");
    printf("The Address of pointer to a is %p\n", &ptra);
    printf("The Address of a is %p\n", &a); 
    printf("The Address of a is %p\n", ptra); 
    printf("\n");
    int *ptr2 = NULL;
    // #Null Pointer == Khali Dabba ha
    // A pointer that is not assigned any value but NULL is  known as the NULL pointer
    // We can use it to initialize a pointer variable when that pointer variable 
    // isn't assigned any valid memory address yet.
    // int * ptr = NULL;
    printf("The Address of some garbage is %p\n", ptr2);    
    
    return 0;
}

