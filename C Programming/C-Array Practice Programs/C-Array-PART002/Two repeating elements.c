/*Problem statement:
The program must accept N positive integers as the input. 
The program must print two elements which are duplicated in the given array in descending order.*/
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

    int count = 0;

    for(int i = 1000; i >= 1; i--)
    {
        int freq = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[j] == i)
            {
                freq++;
            }
        }

        if(freq > 1)
        {
            printf("%d ", i);
            count++;

            if(count == 2)
            {
                break;
            }
        }
    }

    return 0;
}
