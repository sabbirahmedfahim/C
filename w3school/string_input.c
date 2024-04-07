// ONE 
/*Taking an index to determine how many strings it will print, 
then inputting strings separately*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char strings[n][20];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &strings[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s ", strings[i]);
    }
    
   
   return 0;
}

// TWO
// Simple Inputting String
// #include <stdio.h>

// int main()
// {
//    char l[20], m[20], n[20];
//    scanf("%s %s %s", &l, &m, &n);
//    printf("%s\n%s\n%s\n", l, m, n);
   
//    return 0;
// }







