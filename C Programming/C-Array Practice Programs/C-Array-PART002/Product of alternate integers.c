Problem statement:
/*The program must accept two integer arrays of size N as the input. 
The program must print the product of the first element in the first array and Nth element in the second array, 
then the program must print the product of the second element in the first array 
and N-1th element in the second array and so on.*/

solution:
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i] * arr2[n-1-i]);
    }

    return 0;
}
