#include <stdio.h>
int main()
{
    int Ages[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &Ages[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d \t", Ages[i]);
    }
    int Youngest = Ages[0];
    for (int i = 0; i < 4; i++)
    {
        if (Youngest > Ages[i])
        {
            Youngest = Ages[i];
        } 
    } printf("\nYoungest: %d\n", Youngest);  

      int Oldest = Ages[0];
    for (int i = 0; i < 4; i++)
    {
        if (Oldest < Ages[i])
        {
            Oldest = Ages[i];
        } 
    } printf("Oldest: %d\n", Oldest);

   return 0;
}
