#include <stdio.h>
#include <string.h>

void addBook_Func(int *selectOpt, int *updatedNumber);

int totalBooks, updatedNumber;

char options[][20] = {"Add books", "Borrow books", "Library statistic", "Exit"};
char type_Book[][30] = {"Fanstasy", "Fiction", "Action Adventure"};

int main () {

    printf("(Admin): Enter number of book: ");
    scanf("%d", &totalBooks);

    for(int i = 0; i < sizeof(options) / sizeof(options[0]); i++ ) {
        printf("%d. %s \n", i + 1, options[i]);
    }
    int selectOpt;
    printf("\nChoose option: ");
    scanf("%d", &selectOpt);

    if(selectOpt >= 1 && selectOpt <= sizeof(options) / sizeof(options[0])) {
        switch (selectOpt)
        {
        case 1:
            addBook_Func(&totalBooks, &updatedNumber);
            printf("%d \n", updatedNumber);
            break;
        
        default:
            break;
        }

    }


}

void addBook_Func (int *selectOpt, int updatedNumber) {
    int addBook, selectBook;

    for(int i = 0; i < sizeof(type_Book) / sizeof(type_Book[0]); i++ ) {
        printf("%d. %s \n", i + 1, type_Book[i]);
    }

    printf("Choose book type: ");
    scanf("%d", &selectBook);

    if(selectBook >= 1 && selectBook <= sizeof(type_Book) / sizeof(type_Book[0]));
    printf("%s \n", type_Book[selectBook - 1]);

    if(strcmp(type_Book[selectBook - 1], "") == 0) {
        printf("%s: Enter quantity to be added: \n", options[selectBook - 1]);
        scanf("%d", &addBook);
        *updatedNumber = *totalBooks += addBook;

    }
    
}