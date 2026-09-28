/*Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/


#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // First character is always an initial
    printf("%c.", name[0]);

    // Character after every space is an initial
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c.", name[i]);
        }
    }

    return 0;
}