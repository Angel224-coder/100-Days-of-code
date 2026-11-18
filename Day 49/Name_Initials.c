//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/


#include <stdio.h>

int main() {
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] != ' ' && str[i] != '\n') {
                printf("%c.", str[i]);
            }
        }
    }

    return 0;
}
