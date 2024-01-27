/*
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);

    if (age>=18)
    {
        printf("You can vote!");
    }
    else if (age>=10)
    {
        printf("You are between 10 to 17  and you can vote for kids");
    }
    else if (age>3)
    {
        printf("You are between 3 to 9  and you can  vote for babies");
    }
    else
    {
        printf("You cannot vote!");
        }

    
     
    return 0;
}
*/

#include <stdio.h>
int main() {
    int math, science;
    printf("Did you pass in math and science, or individually in one subject? Write down the subject name you passed (0 for fail, 1 for pass):\n");
    scanf("%d", &math);
    scanf("%d", &science);

    if (math && science) {
       printf("You have passed in both math and science, so you will get 45 taka\n");
    }
    else if (science) {
        printf("You have passed in science, so you will get 15 taka\n");
    }
    else {
        printf("You have passed in math, so you will get 15 taka\n");
    }

    return 0;
}
