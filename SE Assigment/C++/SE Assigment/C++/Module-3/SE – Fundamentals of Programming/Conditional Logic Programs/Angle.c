#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Input angles
    printf("Enter the three angles of the triangle:\n");
    printf("Angle 1: ");
    scanf("%f", &angle1);
    printf("Angle 2: ");
    scanf("%f", &angle2);
    printf("Angle 3: ");
    scanf("%f", &angle3);

    // Check if a triangle can be formed
    if (angle1 + angle2 + angle3 == 180) {
        printf("The given angles can form a triangle.\n");

        // Check for the type of triangle
        if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
            printf("It is an equilateral triangle.\n");
        } else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3) {
            printf("It is an isosceles triangle.\n");
        } else {
            printf("It is a scalene triangle.\n");
        }
    } else {
        printf("The given angles cannot form a triangle.\n");
    }

    return 0;
}
