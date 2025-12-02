#include <stdio.h>

int main() {
    int choice;
    float baseFare, tax, totalFare;

    printf("Vehicle Fare System\n");
    printf("-------------------\n");
    printf("1. Bus\n");
    printf("2. Truck\n");
    printf("3. Sedan\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    
    if (choice == 1) {
        baseFare = 100;   
    } else if (choice == 2) {
        baseFare = 200;   
    } else if (choice == 3) {
        baseFare = 150;  
    } else {
        printf("Invalid choice!\n");
        return 0;}
    
    tax = baseFare * 0.10;
    totalFare = baseFare + tax;


    printf("\nBase Fare (Without Tax): %.2f\n", baseFare);
    printf("Tax (10%%): %.2f\n", tax);
    printf("Total Fare (With Tax): %.2f\n", totalFare);

    return 0;
}

