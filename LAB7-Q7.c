#include <stdio.h>

int main() {
    float mileage[8];           
    int i, needsMaintenanceCount = 0;

    printf("Enter mileage (km per litre) for 8 vehicles:\n");
    for (i = 0; i < 8; i++) {
        printf("Vehicle %d: ", i + 1);
        scanf("%f", &mileage[i]);
    }

    printf("\nFleet Mileage Report:\n");
    printf("----------------------------------------------------\n");
    printf("Vehicle\tMileage (km/l)\tStatus\n");
    printf("----------------------------------------------------\n");

    for (i = 0; i < 8; i++) {
        if (mileage[i] >= 18) {
            printf("%d\t%.2f\t\tEfficient\n", i + 1, mileage[i]);
        } else if (mileage[i] >= 12) {
            printf("%d\t%.2f\t\tAverage\n", i + 1, mileage[i]);
        } else {
            printf("%d\t%.2f\t\tNeeds Maintenance\n", i + 1, mileage[i]);
            needsMaintenanceCount++;
        }
    }

    printf("----------------------------------------------------\n");

    
    if (needsMaintenanceCount > 3) {
        printf("  Fleet Efficiency Alert! More than 3 vehicles need maintenance.\n");
    } else {
        printf("Fleet Efficiency Status: Acceptable.\n");
    }

    return 0;
}

