#include <stdio.h>
#include <string.h>
//Alther Adrian P. Liga - IT1R14 - Activity #2.3


char conversionOpt[][50] = {"Convert Celsius to Fahrenheit", "Convert Fahrenheit  to Celsius"};
double fahrenheit, temperature, celsius;
int loop_Program = 1;

void celsius_Fahren (int selectOpt) {

    fahrenheit = (temperature*9/5) + 32;
    printf("%.2lfcelsius > %.2lffahrenheit \n", temperature, fahrenheit);

}

void fahren_Celsius (int selectOpt) {

    celsius = (temperature - 32) * 5/9;
    printf("%.2lffahrenheit > %.2lfcelsius \n", temperature, celsius  );
}


int main (void) {
    
    int selectOpt;

    while(loop_Program == 1) {

    printf("Enter temperature: ");
    scanf("%lf", &temperature);

    for(int i = 0; i < sizeof(conversionOpt) / sizeof(conversionOpt[0]); i++ ) {
        printf("%d. %s \n", i + 1, conversionOpt[i]);
    }
    
    printf("\nSelect conversion: ");
    scanf("%d", &selectOpt);

    switch (selectOpt)
    {
    case 1: printf("Convert Celsius to Fahrenheit \n");
    celsius_Fahren(selectOpt);
        break;

    case 2: printf("Fahrenheit Celsius to Convert \n");
    fahren_Celsius(selectOpt);
        break;
    
    default:
    printf("Invalid Entry! \n");
        break;
    }

    printf("Do you want to make another program? (1. Yes 2. No): " );
    scanf("%d", &loop_Program);
    }
    if(loop_Program == 2) {
        printf("Bye! \n");
    }
    return 0;

}