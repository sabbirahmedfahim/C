#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int w1, h1, w2, h2;
        scanf("%d %d %d %d", &w1, &h1, &w2, &h2);
        // long long int areaOfAbul =  w1 * h1; //missed typecasting
        long long int areaOfAbul = (long long) w1 * h1;
        long long int areaOfBabul = (long long) w2 * h2;
        if (areaOfAbul > areaOfBabul)
        {
            printf("Abul\n");
        }
        else if (areaOfBabul > areaOfAbul)
        {
            printf("Babul\n");
        }
        else
        {
            printf("Equal\n");
        }
    }

    return 0;
}