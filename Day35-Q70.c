/*Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/


#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    k = k % n;

    // Print last k elements first
    for (int i = n - k; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Print remaining elements
    for (int i = 0; i < n - k; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}