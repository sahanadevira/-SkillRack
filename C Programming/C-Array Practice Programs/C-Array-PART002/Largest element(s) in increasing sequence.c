/*Problem statement:
The program must accept N integers as input. 
The program must find all the sequences having the integers in increasing order or ascending order.

Then, the program must print the largest integer (i.e., the largest integer value) in all the sequences as the output.*/

Solution:

#include <stdio.h>

int main()
{
    int n, a[100], i;
    int max = -1, len = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++)
    {
        if(a[i] > a[i - 1])
        {
            len++;

            if(len >= 2 && a[i] > max)
            {
                max = a[i];
            }

            if(a[i - 1] > max)
            {
                max = a[i - 1];
            }
        }
        else
        {
            len = 1;
        }
    }

    printf("%d", max);

    return 0;
}

