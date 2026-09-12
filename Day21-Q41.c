/*Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/



#include <stdio.h>

int main()
{
    int n, first, last, digits, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find the last digit
    last = n % 10;

    // Find the number of digits
    digits = 0;
    temp = n;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    // Find the first digit
    first = n / (10 * (digits - 1));

    // Swap the first and last digit
    n = n - first * (10 * (digits - 1)) - last;
    n = n + last * (10 * (digits - 1)) + first;

    printf("Number after swapping first and last digit = %d", n);

    return 0;
}