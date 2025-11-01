
#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n) {
    int decimal = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    return decimal;
}

long long decimalToBinary(int n) {
    long long binary = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long bin;
        printf("Enter binary number: ");
        scanf("%lld", &bin);
        printf("Decimal = %d\n", binaryToDecimal(bin));
    } else if (choice == 2) {
        int dec;
        printf("Enter decimal number: ");
        scanf("%d", &dec);
        printf("Binary = %lld\n", decimalToBinary(dec));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
