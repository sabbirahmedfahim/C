// finished first part but can't solve second part(1 or 2). maybe array newa hoy nai
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    

    int myArray[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        
        scanf("%d %d", &a, &b);
        int difference;
        if (a>b)
        {
            difference = a-b;
            winner = 1;   
        } else if (a<b)
        {
            difference = b-a;
            winner = 2;
        }
        myArray[i] = difference;
    }

        int maximumScore = myArray[0];


    for (int i = 0; i < n; i++)
    {
        if (maximumScore < myArray[i])
        {
            maximumScore = myArray[i];
        } 
    } printf("%d\n",  maximumScore);
    //   printf("%d %d\n",winner, maximumScore);
    


    return 0;
}