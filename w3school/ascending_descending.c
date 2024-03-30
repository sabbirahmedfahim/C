#include <stdio.h>

int main()
{
   int i, j, n, temp;
   scanf("%d", &n); // 6 5 4 3
   int marks[n];
   for (i = 0; i < n; i++)
   {
    scanf("%d", &marks[i]);
   } //finished taking input

   for (i = 0; i < n; i++)
   {
    for (j = i+1; j < n; j++) 
   {
    if (marks[i]>marks[j])
    {
        temp = marks[i];
        marks[i] = marks[j];
        // printf("check: %d\n", marks[i]);
        marks[j] = temp;
    } //printf("hehe\n");
    
   }
   }
   
   
   for (int i = 0; i < n; i++)
   {
    printf("%d ", marks[i]);
   }
   
   
     
   return 0;
}


