// coded for one  part, i hafta think about another part (number of player)
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
        } else if (a<b)
        {
            difference = b-a;
        }
        myArray[i] = difference;
    }  
        
        int length = sizeof(myArray)/sizeof(myArray[0]);

        int maximumScore = myArray[0];
    for (int i = 0; i < n; i++)
    {
        if (maximumScore < myArray[i])
        {
            maximumScore = myArray[i];
        } 
    } printf("%d\n", maximumScore);

    return 0;
}
