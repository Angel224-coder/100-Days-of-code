//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0, end;

    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            end = i - 1;

            // Reverse each word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}
