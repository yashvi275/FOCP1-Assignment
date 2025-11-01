#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];

    printf("Enter %d marks: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    printf("Students who scored 99: ");
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d ", i + 1);
            count++;
        }
    }

    if (count == 0)
        printf("\nNo one scored 99.\n");
    else
        printf("\nTotal students scored 99: %d\n", count);

    return 0;
}
