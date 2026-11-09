/*Question: Pair of Integers to Get X
Problem Statement:

The program must accept N integers and an integer X as the input. The program must find the pair of integers that give X by performing addition or subtraction or multiplication. Then the program must print the positions of the integers in all such pairs in sorted order as the output.

Note: At least any two integers in the array will give X by performing addition or subtraction or multiplication.*/
Solution:
#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d%d", &n, &x);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == x ||
               arr[i] - arr[j] == x ||
               arr[j] - arr[i] == x ||
               arr[i] * arr[j] == x)
            {
                printf("%d %d\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}
