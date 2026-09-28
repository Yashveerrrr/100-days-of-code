/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/


#include <stdio.h>

int main() {
    char str[200], longest[100], word[100];
    int i = 0, j = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            word[j] = str[i];
            j++;
        }
        else {
            word[j] = '\0';

            if (j > maxLength) {
                maxLength = j;

                for (int k = 0; k <= j; k++) {
                    longest[k] = word[k];
                }
            }

            j = 0;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}