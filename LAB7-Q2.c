#include <stdio.h>

int main() {
    int occupancy[7];
    int total = 0;
    int i;

    printf("Enter the occupancy (number of patients) for 7 wards:\n");
    for (i = 0; i < 7; i++) {
        printf("Ward %d: ", i + 1);
        scanf("%d", &occupancy[i]);
        total += occupancy[i];
    }

    printf("\nWard-wise Occupancy Status:\n");
    printf("--------------------------------------\n");
    printf("Ward\tOccupancy\tStatus\n");
    printf("--------------------------------------\n");

    for (i = 0; i < 7; i++) {
        if (occupancy[i] > 10)
            printf("%d\t%d\t\tOvercrowded\n", i + 1, occupancy[i]);
        else if (occupancy[i] >= 6)
            printf("%d\t%d\t\tStable\n", i + 1, occupancy[i]);
        else
            printf("%d\t%d\t\tUnderutilized\n", i + 1, occupancy[i]);
    }

    printf("--------------------------------------\n");
    printf("Total patients in hospital: %d\n", total);

    printf("\nWards needing administrative review (Overcrowded or Underutilized):\n");
    int reviewFlag = 0;

    for (i = 0; i < 7; i++) {
        if (occupancy[i] > 10 || occupancy[i] < 6) {
            printf("? Ward %d (Occupancy: %d)\n", i + 1, occupancy[i]);
            reviewFlag = 1;
        }
    }

    if (!reviewFlag)
        printf("All wards are stable. No administrative review required.\n");

    return 0;
}

