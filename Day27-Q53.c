/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/



#include <stdio.h>

int main() {
    int i, j;
    // Upper half including the middle row
    for (i = 1; i <= 5; i += 2) {
        for (j = 1; j <= 5 - i; j += 2) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for (i = 3; i >= 1; i -= 2) {
        for (j = 1; j <= 5 - i; j += 2) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
