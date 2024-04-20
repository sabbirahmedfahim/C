// if you change the value of the array , it gets reflected in
// the main function

#include <stdio.h>

int func1(int arryy[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arryy[i]);
    }
    arryy[0] = 454;
}
void func2(int* ptr) 
{
    for (int i = 0; i < 4; i++)
    {
        // printf("%d ", ptr[i]); //it works, btw similar to previous one
        printf("%d ", *(ptr+i)); //what if i *(ptr)? THINK
    }
    *(ptr+2) = 998;
    
}
// void func3(int arrv2) //place of mistake
void func3(int arrv2[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arrv2[i][j]);
        }
        printf("\n");
        
    }
    
}
int main()
{
    int arr[] = {5, 66, 76, 7, 3, 46}; // it is not necessary to give value name same_2_argument
    int arrV2[2][2] = {{6, 64}, {76, 85}};
    printf("%d\n", arr[0]);
    func1(arr); // the argument of of func is different than actual func argument. it's okay
    printf("\n%d\n", arr[0]); //it u know, u know //it's get reflected
    func2(arr);
    printf("\n"); // you have to think how it changes but previous one do not, easy
    func2(arr);
    printf("\n");
    func2(arr);
    printf("\n");
    func3(arrV2);

    return 0;
}