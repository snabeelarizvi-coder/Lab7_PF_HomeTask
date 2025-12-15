#include <stdio.h>

int main() {
    int units[10];           
    float bill[10];
    float totalRevenue = 0;
    int flaggedHouses = 0;  
    int i;

    printf("Enter weekly electricity usage (in units) for 10 households:\n");
    for (i = 0; i < 10; i++) {
        printf("House %d: ", i + 1);
        scanf("%d", &units[i]);
    }

    printf("\nElectricity Usage Summary:\n");
    printf("-------------------------------------------------------------\n");
    printf("House\tUnits\t\tBill (Rs.)\tRemark\n");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < 10; i++) {
        
        if (units[i] <= 200) {
            bill[i] = units[i] * 15.0;
        } else {
            if (units[i] <= 500) {
                bill[i] = units[i] * 20.0;
            } else {
                bill[i] = units[i] * 25.0;
            }
        }

        
        if (units[i] > 700) {
            printf("%d\t%d\t\t%.2f\tHigh Consumption\n", i + 1, units[i],bill[i]);
            flaggedHouses++;
        } else {
            printf("%d\t%d\t\t%.2f\tNormal\n", i + 1, units[i], bill[i]);
        }

        
        totalRevenue += bill[i];
    }

    printf("-------------------------------------------------------------\n");
    printf("Total Revenue Collected: Rs. %.2f\n", totalRevenue);
    printf("Number of High Consumption Houses: %d\n", flaggedHouses);

    return 0;
}
