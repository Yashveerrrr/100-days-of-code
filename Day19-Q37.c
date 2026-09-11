/*Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/


#include<stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find LCM using the formula: LCM = (a * b) / HCF
    int hcf;
    int x = a, y = b;
    while (y != 0) {
        hcf = y;
        y = x % y;
        x = hcf;
    }
    lcm = (a * b) / hcf;

    printf("LCM: %d\n", lcm);

    return 0;
}