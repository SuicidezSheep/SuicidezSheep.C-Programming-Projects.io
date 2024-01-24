#include <stdio.h>

int totalDownload = 0;
int trackDocumentDownload(int selectOpt, int updatedNumber);

int main (void ) {

    int loop_Program = 1;

    do {
        
    printf("Document Downloads Tracker \n");

    char option[50] = "1. Download Document \n2. Exit\n";
    printf("%s \n", option);

    int select_Opt;

    printf("Enter your choice: ");
     scanf("%d", &select_Opt);
     puts("");

    if(select_Opt == 1) {
        totalDownload++;
        trackDocumentDownload(select_Opt, totalDownload);
        
    }else if(select_Opt == 2) {
        loop_Program = 0;
        printf("Total downloads: %d \n", totalDownload);
        break;
    }

    }while (loop_Program);
    

}

int trackDocumentDownload(int selectOpt, int updatedNumber)
{
    printf("Document Downloaded. Total downloads: %d \n", updatedNumber);

    return 0;
}
