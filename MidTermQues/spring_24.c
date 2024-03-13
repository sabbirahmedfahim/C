// // 2.b
// #include <stdio.h>

// int main()
// {
//    int j =1;
//    while (j<5)
//    {
//     printf("%d\n", j++);

//    }

//    return 0;
// }

// 6.b
// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     int ans = n;
//     start:
//     ans+=n;
//     if (ans%2==1)
//     {
//         goto odd;
//     }
//     if (ans%2==0)
//     {
//         goto start;
//     }
//     odd:
//     printf("%d", ans);

//    return 0;
// }

// 7.b
// #include <stdio.h>

// int main()
// {
//     int i = 4;
//     switch (i)
//     {
//     case 1:
//         printf("Case1");
//         break;

//     case 1 * 2 + 2:
//         printf("Case2");
//         break;
//     }

//     return 0;
// }

// 8.b
#include <stdio.h>

int main()
{
    int P = 10;
    switch (P)
    {
    case 10:
        printf("Case 1");
        break;
    case 20:
        printf("Case 2");
        break;

    // case P:
    //     printf("Case 2");
    //     break;
    }

    return 0;
}
