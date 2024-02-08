/*Suppose you want to calculate what is the average of your 
daily expenses. Create a program *where you input the length of 
your expense array*, then take each expense as an array of elements,
 calculates the average expense,
 offering insights into your financial journey. ⭐*/
//  Done
 
#include <stdio.h>
int main() {
    int x;
    printf("How many fields did you expensed today? ");
    scanf("%d", &x);
int TodaysExpense[x];
    printf("Enter %d fields of expense one by one\n", x);

    for (int i = 0; i < x; i++)
    {
        printf("Field %d: ", i + 1);
        scanf("%d", &TodaysExpense[i]);
    }
    
    printf("Expense list: ");
    for (int i = 0; i < x; i++)
    {
        // printf("Todays Expense List: %d ", TodaysExpense[i]);
        
        printf("%d ", TodaysExpense[i]);

    }
    int sum = 0; //mistake
    // float sum = 0;
    int length = sizeof(TodaysExpense) / sizeof(TodaysExpense[0]); //don't understand the calculation //used 0 not i
    // for (int i = 0; i < sum; i++) //find the logical error
    for (int i = 0; i < length; i++)
    {
        sum = sum + TodaysExpense[i];
    }
    float avg;
    avg = sum/length;
    // printf("Your average expense for today is %d\n", avg); //used wrong format specifier
    printf("\nYour average expense for today is %.3f\n", avg); //hahah, discovered new way to create a New Line
    
    return 0;
}