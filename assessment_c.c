#include <stdio.h>

int main() {
    int choice;
    int quantity;
    double totalAmount = 0.0;
    char moreOrders;

    do {
        printf("Menu:\n");
        printf("1. Pizza - 180rs/pcs\n");
        printf("2. Burger - 100rs/pcs\n");
        printf("3. Dosa - 120rs/pcs\n");
        printf("4. Idli - 50rs/pcs\n");

        printf("Please enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                break;
            case 2:
                printf("You have selected Burger.\n");
                break;
            case 3:
                printf("You have selected Dosa.\n");
                break;
            case 4:
                printf("You have selected Idli.\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
                continue;
        }

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        switch (choice) {
            case 1:
                totalAmount += quantity * 180.0;
                break;
            case 2:
                totalAmount += quantity * 100.0;
                break;
            case 3:
                totalAmount += quantity * 120.0;
                break;
            case 4:
                totalAmount += quantity * 50.0;
                break;
        }

        printf("Amount: %.2f\n", totalAmount);

        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrders);

    } while (moreOrders == 'y' || moreOrders == 'Y');

    printf("Total Amount is = %.2f\n", totalAmount);
    printf("Thank you for your order!\n");

    return 0;
}