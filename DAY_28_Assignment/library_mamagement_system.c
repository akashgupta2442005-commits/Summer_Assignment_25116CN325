#include <stdio.h>
#include <string.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
    int available;   // 1 = Available, 0 = Issued
};

struct Book book[100];
int count = 0;

// Add Book
void addBook() {
    printf("Enter Book ID: ");
    scanf("%d", &book[count].bookId);

    printf("Enter Book Title: ");
    scanf("%s", book[count].title);

    printf("Enter Author Name: ");
    scanf("%s", book[count].author);

    book[count].available = 1;
    count++;

    printf("Book Added Successfully!\n");
}

// Display Books
void displayBooks() {
    int i;

    if (count == 0) {
        printf("No books available!\n");
        return;
    }

    printf("\nBook ID\tTitle\tAuthor\tStatus\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%s\t%s\t%s\n",
               book[i].bookId,
               book[i].title,
               book[i].author,
               book[i].available ? "Available" : "Issued");
    }
}

// Search Book
void searchBook() {
    int id, i, found = 0;

    printf("Enter Book ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (book[i].bookId == id) {
            printf("\nBook Found!\n");
            printf("Book ID : %d\n", book[i].bookId);
            printf("Title   : %s\n", book[i].title);
            printf("Author  : %s\n", book[i].author);
            printf("Status  : %s\n",
                   book[i].available ? "Available" : "Issued");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book Not Found!\n");
}

// Issue Book
void issueBook() {
    int id, i, found = 0;

    printf("Enter Book ID to Issue: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (book[i].bookId == id) {
            if (book[i].available) {
                book[i].available = 0;
                printf("Book Issued Successfully!\n");
            } else {
                printf("Book Already Issued!\n");
            }
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
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