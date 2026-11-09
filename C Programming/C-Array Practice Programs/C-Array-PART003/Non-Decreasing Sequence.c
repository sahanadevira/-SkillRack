/*Problem Statement:

The program must accept an array of positive integers of size N as the input.

The program must print Valid if the integers in the array form a non-decreasing sequence.
Else, the program must print Invalid as the output.*/

Solution:
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

    int count= 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] <= arr[i + 1])
        {
            count = 1;
            break;
        }
    }

    if(count == 1)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
