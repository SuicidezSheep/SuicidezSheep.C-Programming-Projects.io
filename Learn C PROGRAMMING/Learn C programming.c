#include <stdio.h> 

int areaOfRec (float length, float width) {

    float area;
    area = length * width;
    return area;


}  

int areaRectangle(float length, float width) {

    float areaRec;
    
    areaRec = length * width;
    return areaRec;

}

int main () {

    float l = 10, w = 5;

    float area = areaOfRec(l, w);
    printf("Area of the rectangle: %.2f \n", area );

    l = 100, w = 50;

    area = areaOfRec(l, w);
    printf("Area of the rectangle: %.2f \n", area );

    


}

int areaLocal () {
    //user-defy input

    float length, width;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    areaRec = areaRectangle(length, width);
    printf("Area of the rectangle: %.2f \n", areaRec);


}
