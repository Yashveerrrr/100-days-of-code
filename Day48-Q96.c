/*Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/


#include <stdio.h>

int main() {
    char str[200];
    int i, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    i = 0;

    while (str[i] != '\0') {

        // Skip spaces
        if (str[i] == ' ' || str[i] == '\n') {
            i++;
            continue;
        }

        // Starting position of word
        start = i;

        // Find end of word
        while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            i++;
        }

        end = i - 1;

        // Reverse the word
        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("%s", str);

    return 0;
}