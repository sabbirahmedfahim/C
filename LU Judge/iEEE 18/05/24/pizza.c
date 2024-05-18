#include <stdio.h>
#include <math.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    for (long long int i = 0; i < n; i++)
    {
        double r;
        scanf("%lf", &r);
        double side_length = r * sqrt(2.0);
        // double PI = 22.0 / 7.0; //not accepted, why?
        double PI = 3.14159265358979323846;
        double area_of_spuare = (double) side_length * side_length;
        double area_of_circle = (double) PI * r * r;
        double minimal_wastage = area_of_circle - area_of_spuare;
        printf("%.13lf\n", minimal_wastage);
    }

    return 0;
}