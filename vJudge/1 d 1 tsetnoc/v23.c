#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int myArray[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &myArray[i]); 
    }
    // int length = sizeof(myArray)/sizeof(myArray[0]);
    int evenFigher = 0;
    for (int i = 0; i < n; i++)
    {
        if (myArray[i]%2==0)
        {
            evenFigher = evenFigher + 1;
        } 
    } 
    int oddFigher = 0;
    for (int i = 0; i < n; i++)
    {
        if (myArray[i]%2!=0)
        {
            oddFigher = oddFigher + 1;
        } 
    } 
    if (evenFigher>oddFigher)
    {
        printf("READY FOR BATTLE\n");
    } else if (evenFigher<oddFigher || evenFigher==oddFigher)
    {
        printf("NOT READY\n");
    }


    return 0;
}