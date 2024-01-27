// tutorial-7
// EIGHT
// Bitwise Operators
/*#include <stdio.h>
int main()
{
    int a, b;
    a = 2;
    b = 3;

    printf("a || b = %d\n", a&b);

    return 0;
}
*/

#include <stdio.h>

int main() {
    int x = 2;
    switch (x) {
        case 1:
            x = 4;
        case 2:
            x = 8;
        case 3:
            x = 7;
            break;
        case 4:
            x = 3;
    }

    printf("x = %d\n", x);

    return 0;
}
