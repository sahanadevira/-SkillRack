/*Problem Statement:

Problem Statement
The program must accept an array of size N as input.
- If an odd integer is followed by an even integer, print the product of the two integers.
- If an even integer is followed by an odd integer, print the sum of the two integers.
- Otherwise, print the two integers.
Boundary Conditions
- 3 <= N <= 50
- 1 <= Each Integer <= 99*/

solution:

#include <stdio.h>

int main()
{
    int n, a[50], i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        if(a[i] % 2 != 0 && a[i + 1] % 2 == 0)
        {
            printf("%d ", a[i] * a[i + 1]);
        }
        else if(a[i] % 2 == 0 && a[i + 1] % 2 != 0)
        {
            printf("%d ", a[i] + a[i + 1]);
        }
        else
        {
            printf("%d %d ", a[i], a[i + 1]);
        }
    }

    return 0;
}

