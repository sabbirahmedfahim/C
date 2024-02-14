// one of the sweetest problem ever :P
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int fractionOfOver = n%6;
    int ballsToOver = n/6;
    // printf("frac %d\n over %d\n", fractionOfOver, ballsToOver);
    int highestInTotalOvers, highestInFractions;

    switch (fractionOfOver)
    {
    case 0:
        highestInFractions = 0;
        break;
    case 1:
        highestInFractions = 6;
        break;
    case 2:
        highestInFractions = 10;
        break;
    case 3:
        highestInFractions = 13;
        break;
    case 4:
        highestInFractions = 16;
        break;
    case 5:
        highestInFractions = 19;
        break;
    case 6:
        highestInFractions = 0;
        break;
        
    
    default:
        break;
    }
    
    if (ballsToOver>0)
    {
         for (int i = 0; i < ballsToOver; i++)
    {
        highestInTotalOvers = 22*ballsToOver;
    } 
    } else
    {
        highestInTotalOvers = 0;
    }
        
   
    // printf("%d", highestInTotalOvers);

    
    int maximumRuns = highestInTotalOvers+ highestInFractions;

    printf("%d", maximumRuns);

    

   return 0;
}
