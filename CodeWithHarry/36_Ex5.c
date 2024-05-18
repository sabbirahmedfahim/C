// Question:
// #include <stdio.h>

// void arrayRev(arg1)
// {
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 67};

//     return 0;
// }

#include <stdio.h>

void arrayRev(int arg1[])
{
    for (int i = 6; i >= 0; i--)
    {
        printf("%d ", arg1[i]);
    }
    
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    arrayRev(arr);

    return 0;
}
