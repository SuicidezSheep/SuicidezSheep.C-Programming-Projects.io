    #include <stdio.h>
#include <string.h>



int main () {
    
    int loopProgram;

    while(1) {
        char opearatorOpt[][20] = {"Addition", "Subtraction", "Multiplication", "Division"};
    int selectOperator, firstNum, secondNum, result;

    for(int i = 0; i < sizeof(opearatorOpt) / sizeof(opearatorOpt[0]); i++ ) {
        printf("%d, %s \n", i + 1, opearatorOpt[i]); 
        }

        printf("Choose operator: ");
        scanf("%d", &selectOperator);

        printf("Enter first number: ");
        scanf("%d", &firstNum);

        printf("Enter second number: ");
        scanf("%d", &secondNum);

        switch(selectOperator) {
            case 1: result = firstNum + secondNum;
            printf("Addition: %d \n", result);
            break;

            case 2: result = firstNum - secondNum;
            printf("Subtraction: %d \n", result);
            break;

            case 3: result = firstNum * secondNum;
            printf("Multiplication: %d \n", result);
            break;

            case 4: result = firstNum / secondNum;
            printf("DIvision: %d \n", result);
            break;

            default:
            printf("Inavlid Entry! \n");
            break;

        }

        printf("Loop program: ");
        scanf("%d", loopProgram);

    }

    return 0;

}