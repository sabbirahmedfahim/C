// FIRST TRY &  BASICS
// // angle = (30*H) - (11/2 * M )
// // // if i use include <stdlib.h> header and  use abs function instead of currect version,
// // //it will execute  integer numbers rather than float. so i used this
// #include <stdio.h>
// // #include <stdlib.h>  // Use this header for abs function
// #include <math.h>  // Use this header for fabs function

// int main()
// {
//     int H, M;
//     scanf("%d %d", &H, &M);
   
//     float angle1 = 360.0 - ((30.0 * H) - (11.0 / 2.0 * M)); //Use 11.0 instead of 11 for floating-point division
//     float angle2 = 360.0 + ((30.0 * H) - (11.0 / 2.0 * M));
//     float absolutValue1 = fabs(angle1); //to  execute non-negative value
//     float absolutValue2 = fabs(angle2); //to  execute non-negative value
//     // if (absolutValue1>=absolutValue2 && 0<=H<12 && 0<=M<60) //guess the mistakes
//     if (absolutValue1>=absolutValue2 && 0<=H && H<12 && 0<=M && M<60)

//     {
//         printf("%f", absolutValue2);
//     }
//     // else if (absolutValue1<absolutValue2 && 0<=H<12 && 0<=M<60) //guess the mistakes
//     else if (absolutValue1<absolutValue2 && 0<=H && H<12 && 0<=M && M<60)
    
//     {
//         printf("%f", absolutValue1);
//     }

//     return 0;
// }


#include <stdio.h>
#include <math.h>  

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);
   
    float angle1 = 360.0 - ((30.0 * H) - (11.0 / 2.0 * M));
    float angle2 = 360.0 + ((30.0 * H) - (11.0 / 2.0 * M));
    float angle3 = (30.0 * H) - (11.0 / 2.0 * M);
    float absolutValue1 = fabs(angle1); 
    float absolutValue2 = fabs(angle2); 
    float absolutValue3 = fabs(angle3); 
    
    if (0<=H && H<12 && 0<=M && M<60)
    {
        if (absolutValue2>absolutValue1 && absolutValue3>absolutValue1)
    
        {
            printf("%f\n", absolutValue1);
        }
    
        else if (absolutValue1<absolutValue2 && absolutValue3>absolutValue2)
    
        {
            printf("%f\n", absolutValue2);
        }
        else if (absolutValue1>absolutValue3 && absolutValue2>absolutValue3)
        {
            printf("%f\n", absolutValue3);
        }
        else if (absolutValue1==absolutValue2 || absolutValue1==absolutValue3 || absolutValue2==absolutValue3)
        {
            printf("%f\n", absolutValue3);
        }
        
    }
    else
    {
        printf("invalid input\n");
    }

    return 0;
}
