#include <stdio.h>
#include <math.h>

int isPrime(int x);

int main () {

    int x;

    printf("Enter a positive number: ");
    scanf("%d", &x);

    while(x < 0) {
        printf("Can't handle a negative integers, Ty again: ");
        scanf("%d", &x);
    }

    if(isPrime(x)) {
        printf("Number %d is prime number.\n", x);
    } else {
        printf("Number %d is a composite number. \n", x);
    }

    return 0;
}

int isPrime (int x) {

    int is_prime = 1;

    if(x < 2) {
        printf("Cannot performed number less than 1\n");
        return 0;
    }

    for(int i = 2; i <= x / 2; i++ ) {
        if (x % 2 == 0) {
            is_prime = 0;
            break;
        }
    }

    return is_prime;

}