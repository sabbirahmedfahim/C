// Alhamdulillah 
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
// failed
// #include <stdio.h>

// int main()
// {
//     int N, D; 
//     scanf("%d %d", &N, &D); 
//     int totalDays = N*30; 
//     int firstFriday = totalDays - D; 
//     int modOfDays = firstFriday%7; 
//     int holyDays = firstFriday/7; 

//     if (N <= 50 && D <= 7)
//     {
//         if (N == 0 || D == 0)
//     {
//         printf("%d", 0);
//     } else if (D == 7)
//     {
//         holyDays = (holyDays*2)+1;
//         printf("%d\n", holyDays+2);
//     } else if (modOfDays == 0)
//     {
//         holyDays = (holyDays*2)+1;
//         printf("%d\n", holyDays);
//     } else if (modOfDays == 1)
//     {
//         holyDays = (holyDays+1)*2;
//         printf("%d\n", holyDays);
//     } else if (modOfDays>1 && modOfDays<7)
//     {
//         holyDays = (holyDays+1)*2;
//         printf("%d\n", holyDays);
//     }
//     }
   
//    return 0;
// }


// THREE 
/*the problem was, we did not thought(consider) what if(would happen) 
(if)saturday is the first day of the first month. Now fixed*/
#include <stdio.h>

int main()
{
   int N, D;  
   scanf("%d %d", &N, &D); 
   int monthToDays = 30*N; 
   int daysCount = monthToDays -D -1 +7;
   int fullWeek = daysCount/7;
   int holyDaysOfFullWeek;
   if (D<7)
   {
    holyDaysOfFullWeek = 2*fullWeek;
   } else if (D==7)
   {
    holyDaysOfFullWeek = (2*fullWeek)+1;
   }
   
   int remainderOfWeek = daysCount%7; 
   int fractionCount = 0;

    switch (remainderOfWeek)
    {
    case 6:
        fractionCount = 1;
        break;   
    default:
    fractionCount = 0;
        break;
    }
   printf("%d\n", holyDaysOfFullWeek+fractionCount);

   return 0;
} 

