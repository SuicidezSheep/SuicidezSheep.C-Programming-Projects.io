#include <stdio.h>
#include <string.h>

int maint () {

    int comProg, introCom, gradeAverage, passingGrade = 75;

    printf("Start \n");
    printf("Grading System! \n");
    printf("Enter Computer Programming grade: ");
    scanf("%d", &comProg);
    printf("Enter Introduction to Computing grade: ");
    scanf("%d", &introCom);
    gradeAverage = (comProg + introCom)/2;

    if(gradeAverage >= passingGrade) {
        printf("You are PASSED! \n");
    } else if( gradeAverage < passingGrade) {
        printf("You are FAILED! \n");
    }
    else {
        printf("Invalid Entry! \n");
    }
    printf("Stop\n");

    return 0;
    


}