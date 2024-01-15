#include<stdio.h>

int main() {
    int maths, physics, chemistry, total;

    // Input marks
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    // Calculate total marks
    total = maths + physics + chemistry;

    // Check eligibility
    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || (total >= 140 && maths + physics >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
