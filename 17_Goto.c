/*
GOTO STATEMENT (easy)
also called jump statement in
*/
// ONE
/*
#include <stdio.h>

int main()
{
label:
    printf("we are inside label\n");
    goto end;
    printf("Bismillah\n");
    goto label;
end:
    printf("We are at end");
    return 0;
}
*/

// TWO
// It does not exit, even when you enter 0. solution given on THREE
/*
#include <stdio.h>

int main()
{
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num==0)
            {
                break;
            }

        }
    }

    return 0;
}
*/

// THREE
#include <stdio.h>

int main()
{
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:

    return 0;
}
