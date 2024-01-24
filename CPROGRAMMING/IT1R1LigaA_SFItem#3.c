#include <stdio.h>

int total_Books, updatedNum_Books;
char options[][20] = {"Add Books", "Check-out Books", "Return Books", "Exit"};

void addBooks();
void bookCheckOut();
void returnBooks();

int main() {
    int loopProgram = 1;

    do {
        int selectOpt;

        printf("---------------\"Welcome to my Library\"---------------\n");

        puts("\nAdmin--------------------------------------------------------");

        printf("Enter total number of books: ");
        scanf("%d", &total_Books);
        printf("Total number of books in library: %d \n", total_Books);

        puts("\nUser---------------------------------------------------------");

        for (int i = 0; i < sizeof(options) / sizeof(options[0]); i++) {
            printf("%d. %s\n", i + 1, options[i]);
        }

        printf("Select option: ");
        scanf("%d", &selectOpt);

        switch (selectOpt) {
            case 1:
                addBooks();
                break;

            case 2:
                bookCheckOut();
                break;

            case 3:
                returnBooks();
                break;

            case 4:
                if (selectOpt == 4) {
                    printf("\n\nExiting Program!\n");
                }
                break;

            default:
                printf("Invalid Entry! \n");
                break;
        }

        printf("Do you want to perform another operation? (1. Yes 2. End): ");
        scanf("%d", &loopProgram);

    } while (loopProgram == 1);

    if (loopProgram == 2) {
        printf("Thank you for visiting my library \n");
    }

    return 0;
}

void addBooks() {
    int addBooks;
    printf("\nCurrent books: %d \n", total_Books);
    printf("Enter number of books to be added: ");
    scanf("%d", &addBooks);

    updatedNum_Books = total_Books += addBooks;
    printf("Statistics: \n");
    printf("Previous number: %d > Updated number: %d \n", total_Books - addBooks, updatedNum_Books);
}

void bookCheckOut() {
    int checkOut_Book;
    printf("\nCurrent number of books: %d \n", total_Books);
    printf("Enter number to be check-out: ");
    scanf("%d", &checkOut_Book);

    while (checkOut_Book > total_Books) {
        printf("Insufficient stock of books. Try a lower number: ");
        scanf("%d", &checkOut_Book);
    }

    if (checkOut_Book <= total_Books) {
        updatedNum_Books = total_Books -= checkOut_Book;

        printf("Statistics: \n");
        printf("Previous number: %d > Updated number: %d \n", total_Books + checkOut_Book, updatedNum_Books);
    }
}

void returnBooks() {
    int returnBooks;
    printf("\nCurrent number of books: %d \n", total_Books);
    printf("Enter number to return: ");
    scanf("%d", &returnBooks);

    updatedNum_Books = total_Books += returnBooks;
    printf("Statistics: \n");
    printf("Previous number: %d > Updated number: %d \n", total_Books - returnBooks, updatedNum_Books);
}
