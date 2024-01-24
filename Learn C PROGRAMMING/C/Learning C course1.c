#include <stdio.h>
#include <string.h>

int main() {

    
    //problem #3: calculate the grade average of 4 subject

    float comprogGrade, introcomGrade, mmwGrade, rphGrade, nstpGrade, purcomGrade, tcwGrade, pathfitGrade, average;

    printf("Enter Computer Programming grade: ");
    scanf("%f", &comprogGrade);

    printf("Enter Introduction to Computing grade: ");
    scanf("%f", &introcomGrade);

    printf("Enter MMW grade: ");
    scanf("%f", &mmwGrade);

    printf("Enter Reading Philippines History: ");
    scanf("%f", &rphGrade);

    printf("Enter NSTP(Rotc) grade: ");
    scanf("%f", &nstpGrade);

    printf("Enter PURCOM grade: ");
    scanf("%f", &purcomGrade);

    printf("Enter TCW grade: ");
    scanf("%f", &tcwGrade);

    printf("Enter PATHFIT grade: ");
    scanf("%f", &pathfitGrade);

   

    average = (comprogGrade + introcomGrade + mmwGrade + rphGrade + purcomGrade + tcwGrade + pathfitGrade + nstpGrade)/8.0;
    printf("Result: %.2f \n", average);

    //problem #2: Sum of 2 integers
    int firstNum, secondNum, sum1;
    printf("Enter the first number: ");
    scanf("%d", &firstNum);
    printf("Enter the second number: ");
    scanf("%d", &secondNum);

    sum1 = firstNum + secondNum;
    printf("Sum of %d and %d is = %d \n", firstNum, secondNum, sum1);

    //problem #1: Calculate the area of rectangle
    double width, lenght, area;

    printf("Enter length of the rectangle: ");
    scanf("%lf", &lenght);
    printf("Enter width of the rectangle: ");
    scanf("%lf", &width);

    area = lenght * width;
    printf("length: %2.lf and width: %2.lf = %2.lf \n", lenght, width, area);

    
    // Sum of even integers starting with 2
    int num1 = 2, i, lastNum, sum = 0; // Initialize sum to 0
    printf("Enter the last sequence: ");
    scanf("%d", &lastNum);

    for (i = 0; i < lastNum; i++) {
        sum += num1;
        num1 += 2;
    }

    printf("The sum of even integers starting from 2 up to %d is: %d\n", lastNum, sum);


}
