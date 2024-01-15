#include <stdio.h>

int main() {
    int weekNumber;

    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

    if (weekNumber >= 1 && weekNumber <= 7) {
        
        switch (weekNumber) {
            case 1:
                printf("Day: Monday\n");
                break;
            case 2:
                printf("Day: Tuesday\n");
                break;
            case 3:
                printf("Day: Wednesday\n");
                break;
            case 4:
                printf("Day: Thursday\n");
                break;
            case 5:
                printf("Day: Friday\n");
                break;
            case 6:
                printf("Day: Saturday\n");
                break;
            case 7:
                printf("Day: Sunday\n");
                break;
        }
    } else {
        printf("Invalid week number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
