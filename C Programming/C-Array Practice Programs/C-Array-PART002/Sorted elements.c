/*Problem statement:
The program must accept N integers as the input. The program must print the integers in the following order:
smallest integer, largest integer, second smallest integer, second largest integer and so on.*/

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

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0, j = n-1; i <= j; i++, j--)
    {
        printf("%d ", arr[i]);

        if(i != j)
        {
            printf("%d ", arr[j]);
        }
    }

    return 0;
}
