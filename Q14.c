#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int n, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            count++;
    }

    printf("Number of prime numbers in the array: %d\n", count);
    return 0;
}
