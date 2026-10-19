/*The program must accept two positive integer arrays of size N1 and N2. 
The program must print the common elements in both the arrays in the ascending order as the output. 
If both the arrays have no common elements then the program must print -1 as the output.

Boundary Condition(s):
1 <= N1, N2 <= 50
0 <= Array Element Value <= 1000

Example Input/Output 1:

Input:

5 7
1 2 4 8 0
10 23 2 8 10 0 1

Output:

0 1 2 8*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr1[n], arr2[m];
    int arr3[50];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
             
                int exists = 0;
                for (int k = 0; k < count; k++) {
                    if (arr3[k] == arr1[i]) {
                        exists = 1;
                        break;
                    }
                }
                if (!exists) {
                    arr3[count] = arr1[i];   
                    count++;
                }
                break;                       
            }
        }
    }

    if (count == 0) {
        printf("-1");
        return 0;                            
    }

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (arr3[i] > arr3[j]) {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", arr3[i]);
    }
   
    return 0;
}
