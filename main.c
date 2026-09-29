#include <stdio.h>

int main() { 
    int choice, quantity; 
    int total = 0; 
    
    do { 
        printf("\n ====== BAR MENU ======\n"); 
        printf("1. vat 69 - rs.2456\n"); 
        printf("2. WHISKERS PREMIUM MALT WHISKY - rs.18995\n"); 
        printf("3. Generate Bill & Exit\n"); // Added for clarity
        printf("Enter your choice : "); 
        scanf("%d", &choice); 
        
        if (choice == 1) { 
            printf("Enter quantity : "); 
            scanf("%d", &quantity); 
            total = total + (2456 * quantity); 
            
            printf("vat 69 added\n"); 
        } 
        // FIXED: Changed '=' to '=='
        else if (choice == 2) { 
            printf("Enter quantity : "); // Fixed typo
            scanf("%d", &quantity); 
            total = total + (18995 * quantity); 
            printf("WHISKERS PREMIUM MALT WHISKY added\n"); 
        } 
        else if (choice == 3) { 
            printf("\ngenerating the bill.........\n"); 
        } 
        else { 
            printf("invalid choice!\n"); 
        } 
    } while (choice != 3); 

    printf("\n==== FInaL BilL ======\n"); 
    printf("Total amount = Rs.%d\n", total); 
    printf("Thank you bro! definitely visit again..........\n"); 

    return 0; 
}
