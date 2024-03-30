// Done
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int MyArray[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &MyArray[i]);
    }
    int maxx = MyArray[0];
    for (int i = 0; i < num; i++)
    {
        if (maxx<MyArray[i])
        {
            maxx = MyArray[i];
        }
        
    }
    for (int i = 0; i < num; i++)
    {
        if (MyArray[i]==maxx)
        {
            printf("%d", i);
            break;
        } 
    }
   
    return 0;
}