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

// THREE (goto FOUR for clear image)

// #include <stdio.h>

// int main()
// {
// //    1.SUN 2.MON 3.TUE 4.WED 5.THU 6.FRI(1)** 7.SAT(2 no need)
//    int N, D; //N=month, D=date 
//    scanf("%d %d", &N, &D);
//    int monthToDays = 30*N;
//    int daysCount = monthToDays - D -1; //1 30: 27
//    int fullWeek = (daysCount/7)+1; // 3
//    int fractionOfWeek = daysCount%7; //1
//    int holyDaysOfFullWeek = 2*fullWeek; // 8
//    int fractionCount; //
//    printf("full week %d fraction week %d\n", fullWeek, fractionOfWeek);
//    printf("integer holydays %d\n", holyDaysOfFullWeek);

//    if (fractionOfWeek==0)
//    {
//     fractionCount = 0;
//     printf("%d\n", fractionCount);
//    } else if (fractionOfWeek==1) //Now, I know that typing 'elif' will be converted to 'else if.'
//    {
//     fractionCount = 1;
//     printf("%d\n", fractionCount);
//    } else if (fractionOfWeek==6)
//    {
//     fractionCount = 1;
//     printf("%d\n", fractionCount);
//    } else if (fractionOfWeek>=1 && fractionOfWeek<=7)
//    {
//     fractionCount = 0;
//     printf("%d\n", fractionCount);
//    }
   
   
   
//    printf("ANSWER: %d", holyDaysOfFullWeek+fractionCount);

//    return 0;
// } 


// FOUR

#include <stdio.h>

int main()
{
   int N, D;  
   scanf("%d %d", &N, &D);
   int monthToDays = 30*N;
   int daysCount = monthToDays -D; 
   int fullWeek = (daysCount/7)+1; 
   int fractionOfWeek = daysCount%7; 
   int holyDaysOfFullWeek;
   int fractionCount = 0;
   if (N<=50 && D<=7)
   {
     holyDaysOfFullWeek = 2*fullWeek; 
 
    switch (fractionOfWeek)
    {
    case 7:
        fractionCount = 1;
        break;
    default: fractionCount = 0;
        break;
    }
   }
   
  

   
   printf("%d\n", holyDaysOfFullWeek+fractionCount);


   return 0;
} 
