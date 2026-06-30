#include <stdio.h>

int main() {
    int seats = 10;
    int choice, tickets;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Available Seats: %d\n", seats);
                break;

            case 2:
                printf("Enter Number of Tickets to Book: ");
                scanf("%d", &tickets);

                if(tickets <= seats && tickets > 0) {
                    seats -= tickets;
                    printf("%d Ticket(s) Booked Successfully!\n", tickets);
                    printf("Remaining Seats: %d\n", seats);
                } else {
                    printf("Sorry! Required Seats Not Available.\n");
                }
                break;

            case 3:
                printf("Thank You for Using the Ticket Booking System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);
    return 0;
}