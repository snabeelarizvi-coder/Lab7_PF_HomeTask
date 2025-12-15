#include <stdio.h>

int main() {
    float prices[10];
    float discounted[10];
    float total = 0.0;
    int i;

    printf("Enter the prices of 10 products:\n");
    for (i = 0; i < 10; i++) {
        printf("Price of item %d: Rs. ", i + 1);
        scanf("%f", &prices[i]);
    }

    for (i = 0; i < 10; i++) {
        if (prices[i] < 1000)
            discounted[i] = prices[i] * 0.95;   
        else if (prices[i] <= 5000)
            discounted[i] = prices[i] * 0.90;   
        else
            discounted[i] = prices[i] * 0.85;  

        total += discounted[i];
    }

    printf("\nItem-wise discounted prices:\n");
    printf("----------------------------------\n");
    printf("Item\tOriginal\tDiscounted\n");
    printf("----------------------------------\n");

    for (i = 0; i < 10; i++) {
        printf("%d\t%.2f\t\t%.2f\n", i + 1, prices[i], discounted[i]);
    }

    printf("----------------------------------\n");
    printf("Total amount after discount: Rs. %.2f\n", total);

    // Check for Gold Voucher
    if (total > 25000)
        printf(" Congratulations! You earned a Gold Voucher! \n");
    else
        printf("No Gold Voucher earned this time.\n");

    return 0;
}


