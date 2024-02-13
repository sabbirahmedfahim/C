// failed
// ONE
// 5 12 19 26 =<30
// 1 8 15 22 29
// #include <stdio.h>

// int main()
// {
//     // N = number of month; D = date of first month
//     int N, D; 
//     scanf("%d %d", &N, &D); //10 4
//     int totalDays = N*30; //300
//     int firstFriday = totalDays - D; //296
//     int modOfDays = firstFriday%7; //2
//     int holyDays = firstFriday/7; //42

//     if (N <= 50 && D <= 7)
//     {
//         if (N == 0 || D == 0)
//     {
//         printf("One: %d", 0);
//     } else if (D == 7)
//     {
//         holyDays = (holyDays*2)+1;
//         printf("Two: %d\n", holyDays+2);
//     } else if (modOfDays == 0)
//     {
//         holyDays = (holyDays*2)+1;
//         printf("Three: %d\n", holyDays);
//     } else if (modOfDays == 1)
//     {
//         holyDays = (holyDays+1)*2;
//         printf("Four: %d\n", holyDays);
//     } else if (modOfDays>1 && modOfDays<7)
//     {
//         holyDays = (holyDays+1)*2;
//         printf("Five: %d\n", holyDays);
//     }
//     }
//     // printf("N=%d D=%d totalDays=%d firstFriday=%d modOfDays=%d holyDays=%d", N,D,totalDays,firstFriday,modOfDays,holyDays);

//    return 0;
// }

// TWO
#include <stdio.h>

int main()
{
    int N, D; 
    scanf("%d %d", &N, &D); 
    int totalDays = N*30; 
    int firstFriday = totalDays - D; 
    int modOfDays = firstFriday%7; 
    int holyDays = firstFriday/7; 

    if (N <= 50 && D <= 7)
    {
        if (N == 0 || D == 0)
    {
        printf("One: %d", 0);
    } else if (D == 7)
    {
        holyDays = (holyDays*2)+1;
        printf("Two: %d\n", holyDays+2);
    } else if (modOfDays == 0)
    {
        holyDays = (holyDays*2)+1;
        printf("Three: %d\n", holyDays);
    } else if (modOfDays == 1)
    {
        holyDays = (holyDays+1)*2;
        printf("Four: %d\n", holyDays);
    } else if (modOfDays>1 && modOfDays<7)
    {
        holyDays = (holyDays+1)*2;
        printf("Five: %d\n", holyDays);
    }
    }
   
   return 0;
}