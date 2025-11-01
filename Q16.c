#include <stdio.h>

int main() {
    int n, pos, elem;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];  
  
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (0=front, %d=end): ", n);
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &elem);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = elem;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
