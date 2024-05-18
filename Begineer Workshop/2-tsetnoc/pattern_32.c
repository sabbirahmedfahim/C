    C
   C C //r2c3
  C   C //r3c3
 C     C //r2c4
CCCCCCCCC
#include <stdio.h>

    int
    main()
{
    int n;
    scanf("%d", &n);
    for (int row = 2; row < n; row++)
    {
        for (int col = 1; col <=row; col++)
        {
            if (/* condition */)
            {
                /* code */
            }
            
        }
        printf("\n");
    }
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            if (row == n)
            {
                printf("C");
            }
        }
        printf("\n");
    }

    return 0;
}
