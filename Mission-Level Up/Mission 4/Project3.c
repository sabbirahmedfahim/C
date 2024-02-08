/*Suppose OTA is a bad word, so if you found any word 
containing “ota” then give a message that there is slang.*/
// failed

// first attempt
// #include <stdio.h>

// int main()
// {
// //    char n; forget to add []
   
//    printf("Word: ");
//    scanf("%s", &n);
//    printf("%s", n);
//    char OTA, ota;
//    for (int i=0; i<n; i++)
//   {
//     if (n[i] == OTA || n[i] == ota)
//     {
//         printf("ota is a bad word");
//         break;
//     } else
//     {
//         printf("Okey");
//         break;
//     }
//   }
//    return 0;
// }

// second attempt
#include <stdio.h>

int main()
{
    char myArray[50];
    printf("Are you crazy? ");
    gets(myArray);
    
    int length = sizeof(myArray) / sizeof(myArray[0]);
    for (int i = 0; i < length; i++)
    {
        if (myArray[i] )
        {
            printf("bad word");

        } 
        
    }
 
   return 0;
}



