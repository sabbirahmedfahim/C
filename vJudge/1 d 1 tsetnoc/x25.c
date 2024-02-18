// resolved in two ways & both are correct and accurately submitted

// ONE 
// successful code 
// #include <stdio.h>

// int main()
// {
//    int flag;
//    int numOfInput;
//    scanf("%d", &numOfInput);
//    int myInputNumber;
//    for (int i = 0; i < numOfInput; i++)
//    {
//     flag = 0;
//     scanf("%d", &myInputNumber);
//     for (int j = 2; j < myInputNumber; j++)
//    {
//     if (myInputNumber%j==0)
//     {
//         flag = 1;
//         break;
//     }
//    }
//    if (flag==0 && myInputNumber!=1)
//    {
//     printf("yes\n");
//    } else if (flag==1 || myInputNumber==1)
//    {
//     printf("no\n");
//    }
//    }

//    return 0;
// }


// TWO 

#include <stdio.h>

int main()
    {
    int flag;
    int n;
    scanf("%d", &n);
    int myInputNumber[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myInputNumber[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        flag = 0;
        int count = myInputNumber[i];
        for (int j = 2; j < count; j++)
    {
        if (count%j==0)
        {
            flag = 1;
            break;
        }
    }
    if (flag==0 && count!=1)
    {
        printf("yes\n");
    } else if (flag==1 || count==1)
    {
        printf("no\n");
    }
    }

    return 0;
    }
