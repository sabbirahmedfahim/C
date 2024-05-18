#include <stdio.h>
#include <string.h>

int main()
{
    char arr[101];
    int vowelFlag = 0;
    int consFlag = 0;
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            vowelFlag = 1;
        }
        if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u')
        {
            consFlag = 1;
        }
    }
    if (vowelFlag == 1 && consFlag == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    

    return 0;
}