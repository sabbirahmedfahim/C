// ONE
// C Exercise 1: Multiplication Table Solutions + Shoutouts
/*
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number  you want multiplication table of:\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n", num);

    printf("%d X 1 = %d\n", num, num*1);
    printf("%d X 2 = %d\n", num, num*2);
    printf("%d X 3 = %d\n", num, num*3);
    printf("%d X 4 = %d\n", num, num*4);
    printf("%d X 5 = %d\n", num, num*5);
    printf("%d X 6 = %d\n", num, num*6);

        return 0;
}
*/

// TWO
// solve the problem using loops
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number  you want multiplication table of:\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    


    return 0;
}
