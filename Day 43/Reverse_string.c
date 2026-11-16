//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char str[1000], temp;
    int count = 0;

    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    for (int i = 0; i < count / 2; i++) {
        temp = str[i];
        str[i] = str[count - i - 1];
        str[count - i - 1] = temp;
    }

    str[count] = '\0';

    printf("%s", str);

    return 0;
}
