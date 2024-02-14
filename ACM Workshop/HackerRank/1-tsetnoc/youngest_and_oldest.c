#include <stdio.h>
int main()
{
    //1. Ram 2. Sam 3. Jodu 4. Modhu
    int Ages[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &Ages[i]);
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d \t", Ages[i]);
    // }
    int Youngest = Ages[0];
    for (int i = 0; i < 4; i++)
    {
        if (Youngest > Ages[i])
        {
            Youngest = Ages[i];
        } 
    } if (Youngest==Ages[0])
    {
        printf("Ram is younger.\n");
    } else if (Youngest==Ages[1])
    {
        printf("Sam is younger.\n");
    } else if (Youngest==Ages[2])
    {
        printf("Jodu is younger.\n");
    } else if (Youngest==Ages[3])
    {
        printf("Modhu is younger.\n");
    } 
    // printf("\nYoungest: %d\n", Youngest);  

    int Oldest = Ages[0];
    for (int i = 0; i < 4; i++)
    {
        if (Oldest < Ages[i])
        {
            Oldest = Ages[i];
        } 
    }
    //  printf("Oldest: %d\n", Oldest);

    if (Oldest==Ages[0])
    {
        printf("Ram is elder.\n");
    } else if (Oldest==Ages[1])
    {
        printf("Sam is elder.\n");
    } else if (Oldest==Ages[2])
    {
        printf("Jodu is elder.\n");
    } else if (Oldest==Ages[3])
    {
        printf("Modhu is elder.\n");
    }
    
    
   return 0;
}
