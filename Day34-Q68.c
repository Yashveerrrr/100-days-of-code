/*Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/


#include <stdio.h>

#include <stdio.h>

int deleteElement(int arr[], int n, int key) {
    int i, j;

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }

            return n - 1;
        }
    }

    return n;
}

int main() {
    int n, i, key;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    n = deleteElement(arr, n, key);

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}