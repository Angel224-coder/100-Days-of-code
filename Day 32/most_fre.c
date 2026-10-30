//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/


#include <stdio.h>

int main()
{
    int freq[10] = {0};
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        num = -num;
    }

    while(num > 0)
    {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    // Find digit with maximum frequency
    int maxdigit = 0, maxfreq = freq[0];

    for(int i = 1; i < 10; i++)
    {
        if(freq[i] > maxfreq)
        {
            maxfreq = freq[i];
            maxdigit = i;
        }
    }

    printf("%d\n", maxdigit);

    return 0;
}
