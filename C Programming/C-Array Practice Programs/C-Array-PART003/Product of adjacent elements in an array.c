/*problem statement:
The program must accept the elements of an array of size N as the input.
The program must print the product of the adjacent elements as the output.

Note: The first and the last element has only one adjacent element. 
The only adjacent element is considered as the product for the first and the last element.*/
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
        if(i == 0)
        {
            printf("%d ", arr[i+1]);
        }
        else if(i == n-1)
        {
            printf("%d ", arr[i-1]);
        }
        else
        {
            printf("%d ", arr[i-1] * arr[i+1]);
        }
    }

    return 0;
}
