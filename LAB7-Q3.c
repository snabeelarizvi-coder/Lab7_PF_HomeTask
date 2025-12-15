#include <stdio.h>

int main() {
    int status[15];  
    int delay[15];   
    int fine[15];    
    int totalFine = 0;
    int i;

    printf("Enter fee payment status (0 = not paid, 1 = paid) for 15 students:\n");
    for (i = 0; i < 15; i++) {
        printf("Student %d status: ", i + 1);
        scanf("%d", &status[i]);
    }

    printf("\nEnter delay (in months) for each student (enter 0 if paid on time):\n");
    for (i = 0; i < 15; i++) {
        printf("Student %d delay: ", i + 1);
        scanf("%d", &delay[i]);
    }

    for (i = 0; i < 15; i++) {
        if (status[i] == 0) {
            if (delay[i] >= 2)
                fine[i] = 1000;
            else if (delay[i] == 1)
                fine[i] = 500;
            else
                fine[i] = 0;
        } else {
            fine[i] = 0;
        }

        totalFine += fine[i];
    }


    printf("\nStudent Fee Payment Report:\n");
    printf("----------------------------------------------------------\n");
    printf("Student\tStatus\tDelay(Months)\tFine(Rs.)\tRemark\n");
    printf("----------------------------------------------------------\n");

    for (i = 0; i < 15; i++) {
        printf("%d\t", i + 1);

        if (status[i] == 1)
            printf("Paid\t");
        else
            printf("Not Paid\t");

        printf("%d\t\t", delay[i]);
        printf("%d\t\t", fine[i]);

        if (status[i] == 1)
            printf("Cleared\n");
        else
            printf("Defaulter\n");
    }

    printf("----------------------------------------------------------\n");
    printf("Total fine collected: Rs. %d\n", totalFine);

    return 0;
}

