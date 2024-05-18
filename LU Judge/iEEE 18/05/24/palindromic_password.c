#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int z = 0; z < n; z++)
    {
        char arr1[100001];
        scanf("%s", arr1);
        int len1 = strlen(arr1);
        char arr2[100001];
        int indxx = 0;
        for (int i = 0; i < len1; i++)
        {
            if (arr1[i] != 'a' && arr1[i] != 'e' && arr1[i] != 'i' &&
                arr1[i] != 'o' && arr1[i] != 'u')
            {
                arr2[indxx] = arr1[i];
                indxx++;
            }
        }
        arr2[indxx] = '\0'; //do not forget to terminate the array

        int flag = 0;
        int len2 = strlen(arr2);
        for (int i = 0; i < len2 / 2; i++)
        {
            if (arr2[i] != arr2[len2-i-1])
            {
                flag = 1;
                printf("No\n");
                break;
            }
        }
        if (flag == 0)
        {
            printf("Yes\n");
        }
    }

    return 0;
}