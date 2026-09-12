/*Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/


#include<stdio.h>

int main() {
    int n, product = 1, digit;
    int hasOddDigit = 0; // Flag to check if there are any odd digits

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit;
            hasOddDigit = 1; // Set flag to true
        }
        n /= 10;
    }

    if (!hasOddDigit) {
        product = 1; // If no odd digits, set product to 1
    }

    printf("Product of odd digits: %d\n", product);

    return 0;
}