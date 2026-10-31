//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/


#include <stdio.h>

int main()
{
    int n, pos, element;

    scanf("%d", &n);

    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &element);

    int i = n - 1;

    while (i >= pos - 1)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[pos - 1] = element;
    n++;

    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}
