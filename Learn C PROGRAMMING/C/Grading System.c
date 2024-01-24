    #include <stdio.h>

    int main() {
        // Declare variables
        float compProg, introComp, mathModern, philHistory, comm, nstp, contWorld, pathFit;
        
        // Get input from the user for each subject
        printf("Enter Computer Programming grade: ");
        scanf("%f", &compProg);
        
        printf("Enter Introduction to Computing grade: ");
        scanf("%f", &introComp);
        
        printf("Enter Mathematics in the Modern World grade: ");
        scanf("%f", &mathModern);
        
        printf("Enter Reading Philippine History grade: ");
        scanf("%f", &philHistory);
        
        printf("Enter Purposive Communication grade: ");
        scanf("%f", &comm);
        
        printf("Enter NSTP grade: ");
        scanf("%f", &nstp);
        
        printf("Enter The Contemporary World grade: ");
        scanf("%f", &contWorld);
        
        printf("Enter PathFit grade: ");
        scanf("%f", &pathFit);

        // Calculate the average
        float average = (compProg + introComp + mathModern + philHistory + comm + nstp + contWorld + pathFit) / 8.0;

        // Determine the equivalent description based on the average
        if (average >= 97 && average <= 100) {
            printf("Overall Grade: Excellent\n");
        } else if (average >= 94 && average <= 96) {
            printf("Overall Grade: Excellent\n");
        } else if (average >= 91 && average <= 93) {
            printf("Overall Grade: Very Good\n");
        } else if (average >= 89 && average <= 90) {
            printf("Overall Grade: Very Good\n");
        } else if (average >= 85 && average <= 87) {
            printf("Overall Grade: Above Average\n");
        } else if (average >= 82 && average <= 84) {
            printf("Overall Grade: Above Average\n");
        } else if (average >= 79 && average <= 81) {
            printf("Overall Grade: Average\n");
        } else if (average >= 76 && average <= 78) {
            printf("Overall Grade: Average\n");
        } else if (average == 75) {
            printf("Overall Grade: Passing\n");
        } else if (average >= 72 && average <= 74) {
            printf("Overall Grade: Conditional\n");
        } else if (average >= 69 && average <= 71) {
            printf("Overall Grade: Conditional\n");
        } else if (average >= 66 && average <= 68) {
            printf("Overall Grade: Failed\n");
        } else if (average == 65) {
            printf("Overall Grade: Failed\n");
        } else {
            printf("Overall Grade: Failed\n");
        }

        return 0;
    }
