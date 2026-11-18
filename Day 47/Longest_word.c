//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[100];
    int i, j = 0, max = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > max) {
                max = j;
            }

            if (str[i] == '\0')
                break;

            j = 0;
        }
    }

    // Find and print the longest word
    j = 0;

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            if (j == max) {
                word[j] = '\0';
                printf("%s", word);
                break;
            }

            j = 0;
        }

        if (str[i] == '\0')
            break;
    }

    return 0;
}
