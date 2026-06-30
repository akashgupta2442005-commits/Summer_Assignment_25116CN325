#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

struct Contact contact[100];
int count = 0;

// Add Contact
void addContact() {
    printf("Enter Name: ");
    scanf("%s", contact[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contact[count].phone);

    count++;
    printf("Contact Added Successfully!\n");
}

// Display Contacts
void displayContacts() {
    int i;

    if (count == 0) {
        printf("No Contacts Found!\n");
        return;
    }

    printf("\nName\t\tPhone Number\n");
    printf("-----------------------------\n");

    for (i = 0; i < count; i++) {
        printf("%s\t\t%s\n",
               contact[i].name,
               contact[i].phone);
    }
}

// Search Contact
void searchContact() {
    char name[50];
    int i, found = 0;

    printf("Enter Name to Search: ");
    scanf("%s", name);

    for (i = 0; i < count; i++) {
        if (strcmp(contact[i].name, name) == 0) {
            printf("\nContact Found!\n");
            printf("Name : %s\n", contact[i].name);
            printf("Phone: %s\n", contact[i].phone);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact Not Found!\n");
}

// Delete Contact
void deleteContact() {
    char name[50];
    int i, j, found = 0;

    printf("Enter Name to Delete: ");
    scanf("%s", name);

    for (i = 0; i < count; i++) {
        if (strcmp(contact[i].name, name) == 0) {
            for (j = i; j < count - 1; j++) {
                contact[j] = contact[j + 1];
            }
            count--;
            found = 1;
            printf("Contact Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Contact Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);
    return 0;
}