#include <stdio.h>

//Alther Adrian P. Liga - IT1R14 - Activity #2.1

double calculateCircleArea(int selectOpt);
double calculateRectangleArea(int selectOpt );
double calculateTriangleArea(int selectOpt );


int main () {

    int selectOpt;

    printf("Geometry Calculator: \n");

    printf("1. Calculate Circle \n");
    printf("2. Calculate Rectangle \n");
    printf("3. Calculate Triangle \n");

    printf("\nChoose type of shape to calculate: ");
    scanf("%d", &selectOpt);

    while(selectOpt < 1 || selectOpt > 3) {
        printf("Invalid input, Try again: ");
        scanf("%d", &selectOpt);
        puts("");
    }

    if(selectOpt == 1) {
        printf("Calculate Circle \n");
        calculateCircleArea(selectOpt);

    }
    else if(selectOpt == 2) {
        printf("Calculate Rectangle \n");
        calculateRectangleArea(selectOpt);

    }
    else if(selectOpt ==  3) {
        printf("Calculate Triangle \n");
        calculateTriangleArea(selectOpt);
        
    } 
    

}

double calculateCircleArea(int selectOpt ) { 
    puts("");

    double radius, area;
    double pi = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * radius * radius; 

    printf("Area of circle is: %.2lf", area);

}

double calculateRectangleArea(int selectOpt ) {
    puts("");

    double length, width, area;

    printf("Enter length of rectangle: ");
    scanf("%lf", &length);

    printf("Enter width of rectangle: ");
    scanf("%lf", &width);

    area = length * width;

    printf("Area of rectangle is: %.2lf", area);

}

double calculateTriangleArea(int selectOpt ) {
    puts("");

    double base, height, area;

    printf("Enter base of the triangle: ");
    scanf("%lf", &base);

    printf("Enter height of the triangle: ");
    scanf("%lf", &height);

    area = 0.5 * base * height;

    printf("Area of triangle is: %.2lf", area);




}

