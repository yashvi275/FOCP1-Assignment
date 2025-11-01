#include <stdio.h>

int subtract(int x, int y) {
    while (y != 0) {
        unsigned borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Result (a - b) = %d\n", subtract(a, b));
    return 0;
}
