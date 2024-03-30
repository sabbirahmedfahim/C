// ready to submit
#include <stdio.h>

int main()
{
    int S;
    scanf("%d", &S);
    int arr1[S];
    for (int i = 0; i < S; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int Q;
    scanf("%d", &Q);
    int arr2[Q];
    for (int j = 0; j < Q; j++)
    {
        scanf("%d", &arr2[j]);
    }

    for (int i = 0; i < S; i++)
    {
        int flag = 0;
        for (int j = 0; j < Q; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}
