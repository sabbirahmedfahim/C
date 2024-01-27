/*
kms to miles
inches to foot
cms to inches
inches to meters
*/

#include <stdio.h>

int main(){
    int km;
    float i;
    printf("Enter the km you want to convert into miles:\n");
    scanf("%d", &km);
    printf("You entered %d to convert into miles\n", km);
    for (int i = 0.621371; i < 20; i=i+0.621371)
    {
        printf("%d km is equal to %d miles\n", km, km*i);
    }

    return 0;
}

// I was not able to do this, but I tried at least