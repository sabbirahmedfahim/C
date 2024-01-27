/*we know that-
0! = 1
1! = 1
*/

#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
        // The line represents the recursive calculation where the current number is multiplied by the factorial of a smaller number, and this process repeats until it reaches the base case, which is returning 1 for `number` values of 0 or 1.
    }
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of:\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    

    return 0;
}

/*
The expression `number * factorial(number - 1)` is a recursive call to the `factorial` function. It calculates the factorial of a number by multiplying the current number (`number`) by the factorial of the previous number (`number - 1`). 

In simpler terms, it breaks down the problem of calculating the factorial of a number into smaller subproblems. It calculates the factorial by repeatedly multiplying the current number by the factorial of a smaller number until it reaches the base case where the factorial of 0 or 1 is defined as 1. This is a fundamental concept in recursive algorithms, where a problem is divided into smaller, similar problems until a base case is reached, and then the results are combined to solve the original problem.
*/