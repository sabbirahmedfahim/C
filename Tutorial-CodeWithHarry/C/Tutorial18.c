// ONE
/*

#include <stdio.h>

int main()
{
    int a =3;
    float b =54;
// Do not use %d while Format Specifier is float. Use %f. Here's why-
   printf("The value of a is %d\n", b);

   return 0;
}
*/

// TWO
/*
But we can execute codes from different Format Specifiers using
Typecasting syntax
(type) value
*/
/*
#include <stdio.h>

int main()
{
    int a =3;
    float b =54;

   printf("The value of a is %d\n", (int) b);

   return 0;
}
*/

// THREE
#include <stdio.h>

int main()
{
    int a =3;
    // float b = 54/7;
    float b = (float) 54/7;
   

   printf("The value of a is %f\n", b);

   return 0;
}

