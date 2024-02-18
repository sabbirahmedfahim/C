// done
#include <stdio.h>

int main()
    {
    int N,K ;
    scanf("%d %d", &N, &K);
    int myInputNumber[N];
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &myInputNumber[i]);
    }
    
    for (int i = 0; i < N; i++)
    {
        int sequenceOfArray = myInputNumber[i];
        if (sequenceOfArray%K==0)
        {
            count = count+1;
        }
        
    }
    printf("%d", count);

    return 0;
    }
