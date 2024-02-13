
not finished yet
#include <stdio.h>

int main()
{
int month, year;
scanf("%d %d",&month, &year);
if (month>=1 && month<=12 && year>=1 && year<=5000)
{
    switch (month)
    {
    case 1:
         printf("31");
        break;
      case 2:
      if (year && year%100!=0 || year%100==0 && year%400==0)
       {
        printf("29");
      } else
        {
         printf("28");
        }
   }
        break;
      case 3:
         printf("31");
        break;
      case 4:
         printf("30");
        break;
      case 5:
         printf("30");
        break;
      case 6:
         printf("31");
        break;
      case 7:
         printf("31");
        break;
      case 8:
         printf("31");
        break;
      case 9:
         printf("30");
        break;
      case 10:
         printf("31");
        break;
      case 11:
         printf("30");
        break;
      case 12:
         printf("31");
        break;
    default:
    printf("Invalid input");
        break;
    }
}  else
    {
        printf("Not valid");
    }
    

   return 0;
}
