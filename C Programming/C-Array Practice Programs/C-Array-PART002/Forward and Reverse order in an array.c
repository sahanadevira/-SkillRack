/*Problem statement:
The program must accept an array of positive integers of size N as the input.
The program must print the even numbers in the array in forward order followed by the odd numbers 
in the array in reverse order as the output.*/

solution:

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
