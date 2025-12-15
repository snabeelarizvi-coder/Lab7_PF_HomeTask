#include <stdio.h>

int main() {
    int posts[10];                   
    int i, maxDay = 0;
    int streakFound = 0;
    float total = 0, average;

    
    printf("Enter the number of posts made each day for 10 days:\n");
    for (i = 0; i < 10; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &posts[i]);
        total += posts[i];
    }

    
    for (i = 1; i < 10; i++) {
        if (posts[i] > posts[maxDay]) {
            maxDay = i;
        }
    }

    
    average = total / 10.0;

    
    for (i = 0; i < 8; i++) {  // up to day 8 because we check i, i+1, i+2
        if (posts[i] < posts[i + 1] && posts[i + 1] < posts[i + 2]) {
            streakFound = 1;
            break;
        }
    }
    
    printf("\n========== Weekly Activity Summary ==========\n");
    printf("Day\tPosts\n");
    printf("---------------------------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\n", i + 1, posts[i]);
    }
    printf("---------------------------------------------\n");
    printf("Highest Activity: Day %d with %d posts\n", maxDay + 1, posts[maxDay]);
    printf("Average Daily Activity: %.2f posts/day\n", average);

    if (streakFound)
        printf("Streak Detected: 3 consecutive increasing days found!\n");
    else
        printf("No 3-day increasing activity streak found.\n");

    printf("=============================================\n");

    return 0;
}
