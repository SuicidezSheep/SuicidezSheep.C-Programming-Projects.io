#include <stdio.h>
#include <string.h>

void myWeekfunc(char[][20], int size);
void mySelectFunc(char[][20], int myDay, int size);
void myWeekTaskFunc(char myLesson[][30], int myDay, int size, int lesson);

int main () { 

    char myWeekdays[][20] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    char myLesson[][30] = {
        "Data Structure & Algorithm", "Computer Programming", "Discrete Math", 
        "Objective-oriented Programming", "Data base Network", "Operating System",
        "Web designing" 
        };
    int myDay;

    int size = sizeof(myWeekdays)/sizeof(myWeekdays[0]);
    myWeekfunc(myWeekdays, size);
    
    printf("Enter your choosen day: ");
    scanf("%d", &myDay);

    mySelectFunc(myWeekdays, myDay, size);

    int lesson = sizeof(myLesson) / sizeof(myLesson[0]);
        myWeekTaskFunc(myLesson, myDay, size, lesson);
 
    return 0;
}

void myWeekfunc(char myWeekdays[][20], int size) {

    for(int i = 0; i<size; i++) {
        printf("%d. %s\n", i+1, myWeekdays[i]);
    }
}

void mySelectFunc(char myWeekdays[][20], int myDay, int size) {

    if(myDay >= 1 && myDay <= size) {
        printf("You chose: %s\n", myWeekdays[myDay - 1]);
    }

}

void myWeekTaskFunc(char myLesson[][30], int myDay, int size, int lesson) {

   if(myDay >= 1 && myDay <= lesson) {
    printf("Lesson: %s\n", myLesson[myDay-1]);
   } 
}
