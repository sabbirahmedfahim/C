// ONE
// i++ means i= i+1
/*
#include <stdio.h>
int main()
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
    }
*/

// TWO
// there is a silly difference between TWO and THREE. execute codes to understand fully
/*
#include <stdio.h>
int main()
{
    int i=0, j=0;
    for (; i < 5, j < 3; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

    return 0;

}
*/

// THREE
/*
#include <stdio.h>
int main()
{
    int i=0, j=0;
    for (; j < 3, i < 5; i++, j++)
    {
        printf("%d %d\n", i, j);
        
    }

    return 0;

}
*/

// FOUR
/*
#include <stdio.h>
int main()
{
    int i, j=0;
    for (i = 0; i < 5; i++, j++)
    {
        printf("%d %d\n", i, j);
        
    }

    return 0;

}
*/

// FIVE

#include <stdio.h>
int main()
{
    int i, j=0;
    for (i = 0; i < 5;)
    {
        printf("%d %d\n", i, j);
         i++, j++;
    }

    return 0;

}
