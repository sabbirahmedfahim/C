// can't think more 
#include <stdio.h>
int main() {
    int n; 
    scanf("%d", &n);
    int myArray[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &myArray[i]); 
    }

    for (int i = 0; i < n; i++) {

        printf("%d ", myArray[i]); 
    }

    return 0;
}
