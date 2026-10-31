//Q68: Delete an element from an array.

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

int main()
{
    int n, pos;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    int index = pos - 1;

    if (index < 0 || index >= n)
    {
        return 0;
    }

    int i = index;

    while (i < n - 1)
    {
        arr[i] = arr[i + 1];
        i++;
    }

    n = n - 1;

    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}
