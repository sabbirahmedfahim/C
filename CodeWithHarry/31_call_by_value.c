// BEST VIDEO 

// Call by Value: when call a func by value, we're passing arguments
// which are copied innto the formal parameters,
// original values  remain unchanged, only parameters inside the func changes

// Call By Reference: the method COPIES the ADDRESS of the arguments into
// the formal parameters. Pointers ka game

// in summery: call by value ke value copy hotihe,
// call by ref mey address copy ho jatahe

// ONE (YouMustKnow)
// #include <stdio.h>

// void changeValue(int* a, int*b)
// {
//     *a = 285;
// }
// int main()
// {
//     int a = 34, b = 4;
//     printf("%d %d\n", a, b);
//     changeValue(&a, &b); //easiest example of Call by Reference
//     printf("%d %d\n", a, b); //if u know, u know

//     return 0;
// }

// TWO
// Quick Quiz: Given two number a and b, add them then substract them
// and assign them to a and b using Call By References
#include <stdio.h>

void addSubAssign(int* a, int* b)
{
    int temp = *a;
    *a = *a+*b;
    *b = temp-*b;
}
int main()
{
    int a = 4;
    int b = 3;
    addSubAssign(&a, &b);
    printf("a = %d\nb = %d", a, b);

    return 0;
}