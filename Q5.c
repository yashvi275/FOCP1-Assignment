#include <stdio.h>

int main() {
    float x, y;
    printf("Enter coordinates (x y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0)
        printf("Point lies in the First Quadrant.\n");
    else if (x < 0 && y > 0)
        printf("Point lies in the Second Quadrant.\n");
    else if (x < 0 && y < 0)
        printf("Point lies in the Third Quadrant.\n");
    else if (x > 0 && y < 0)
        printf("Point lies in the Fourth Quadrant.\n");
    else if (x == 0 && y == 0)
        printf("Point lies at the Origin.\n");
    else if (x == 0)
        printf("Point lies on the Y-axis.\n");
    else
        printf("Point lies on the X-axis.\n");

    return 0;
}
