/*Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using Euclidean algorithm to find HCF
    while (b != 0) {
        hcf = b;
        b = a % b;
        a = hcf;
    }

    printf("HCF (GCD): %d\n", a);

    return 0;
}