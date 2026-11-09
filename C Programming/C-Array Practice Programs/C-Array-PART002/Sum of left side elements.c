/*problem statement:

The program must accept N integers as the input.
The program must print the sum of all the elements present to the left side of each integer
in the reverse order as the output.*/

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
        int sum = 0;

        for(int j = 0; j < i; j++)
        {
            sum += arr[j];
        }

        printf("%d ", sum);
    }

    return 0;
}
