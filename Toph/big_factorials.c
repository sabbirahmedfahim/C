
//failed
#include <stdio.h>

int main()
{
    int n;
    // int factorial = 1;
    long long int factorial = 1; //used long long data type because it's range is larger than int
    /*int: Typically, it is a 32-bit signed integer. The range is from -2,147,483,648 to 2,147,483,647.
    long long: It is specifically designed to be at least 64 bits. 
    The range is from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.*/
    scanf("%d", &n);
   
    if (n>0 && n<1000)
    {
        for (int i = 1; i <= n; i++)
        factorial = factorial*i;
        printf("%04lld", factorial%=10000); //you must relate what is remainder & how it works
   }
   else if (n<1 || n>999)
   {
    printf("invalid input");
   }
   
   return 0;
}




