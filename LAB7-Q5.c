#include <stdio.h>

int main() {
    int strength[6];           
    int invigilators[6];       
    int totalStudents = 0;
    int totalInvigilators = 0;
    int i;

    printf("Enter the number of students in each of the 6 sections:\n");
    for (i = 0; i < 6; i++) {
        printf("Section %d: ", i + 1);
        scanf("%d", &strength[i]);
        totalStudents += strength[i];
    }

    
    for (i = 0; i < 6; i++) {
        if (strength[i] <= 30) {
            invigilators[i] = 1;
        } else {
            if (strength[i] <= 60) {
                invigilators[i] = 2;
            } else {
                invigilators[i] = 3;
            }
        }
        totalInvigilators += invigilators[i];
    }


    if (totalStudents > 300) {
        totalInvigilators += 1;  
    }


    printf("\nSection-wise Invigilator Allocation:\n");
    printf("-----------------------------------------------------\n");
    printf("Section\tStudents\tInvigilators\n");
    printf("-----------------------------------------------------\n");

    for (i = 0; i < 6; i++) {
        printf("%d\t%d\t\t%d\n", i + 1, strength[i], invigilators[i]);
    }

    printf("-----------------------------------------------------\n");
    printf("Total Students: %d\n", totalStudents);

    if (totalStudents > 300)
        printf("Chief Invigilator: Assigned\n");
    else
        printf("Chief Invigilator: Not Required\n");

    printf("Total Invigilators (including Chief if any): %d\n", totalInvigilators);

    return 0;
}

