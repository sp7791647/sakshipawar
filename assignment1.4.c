#include <stdio.h>

int main() {
    float price, discount = 0.0, finalPrice;
    char isStudent;

    
    printf("Enter the purchase amount: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);  

    
    if (isStudent == 'y' || isStudent == 'Y') {
        if (price > 500)
            discount = 0.20 * price;
        else
            discount = 0.10 * price;
    } else if (isStudent == 'n' || isStudent == 'N') {
        if (price > 600)
            discount = 0.15 * price;
        else
            discount = 0.0;
    } else {
        printf("Invalid input for student status.\n");
        return 1;
    }

    finalPrice = price - discount;

    
    printf("Discount applied: ?%.2f\n", discount);
    printf("Final amount to be paid: ?%.2f\n", finalPrice);

    return 0;
}