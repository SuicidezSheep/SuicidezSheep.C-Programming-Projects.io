#include <stdio.h>


int main () {

    char names[20][30] = {"Alther", "Josh", "Kert", "Juhaiber", "Ike"};
    int numbers[] = {1, 2, 3, 4, 5};
    printf("%s \n", names[0]);
    printf("%c \n", names[0]);

    printf("%d \n", numbers[1]);

    for(int i = 0; i < sizeof(names) / sizeof(names[0]) && i < sizeof(numbers) / sizeof(numbers[0]); i++ ) {
        printf("%d. %s - %d \n", i+1, names[i], numbers[i]);
    } 



}