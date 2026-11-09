/*Problem Statement:
The program must accept N integers as the input.
The program must print all the integers that are divisible by their unit digit in reverse order. 
If the unit digit is zero, then the number must be divisible by 10.
*/
solution:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = n-1; i >= 0; i--)
    {
        int digit = abs(arr[i]) % 10;

        if(digit == 0)
        {
            if(arr[i] % 10 == 0)
            {
                printf("%d ", arr[i]);
            }
        }
        else if(arr[i] % digit == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
