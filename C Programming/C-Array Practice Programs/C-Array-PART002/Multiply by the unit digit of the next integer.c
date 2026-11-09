/*problem statement:
The program must accept N integers as the input.
The program must print each integer multiplied by the unit digit of the next integer in the reverse order as the output. 
The last integer is multiplied by the unit digit of the first integer.*/
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

    for(int i = n-1; i >= 0; i--)
    {
        int next = (i + 1) % n;
        int digit = arr[next] % 10;

        printf("%d ", arr[i] * digit);
    }

    return 0;
}
