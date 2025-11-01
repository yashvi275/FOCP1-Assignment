#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("After Temp Swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Arithmetic Swap: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR Swap: a = %d, b = %d\n", a, b);

    int *p = &a, *q = &b;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("After Pointer Swap: a = %d, b = %d\n", a, b);

    return 0;
}
