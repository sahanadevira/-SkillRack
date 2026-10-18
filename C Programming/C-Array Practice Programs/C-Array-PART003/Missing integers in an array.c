/*The program must accept an integer array of size N as the input. 
The program must find the minimum and the maximum integers in the array as X and Y. 
Then the program must print all the integers from X to Y which are not present in the array.
If all the integers are present in the array then the program must print -1 as the output.

Boundary Condition(s):
1 <= N <= 100
1 <= Array Element Value <= 1000

Example Input/Output 1:
Input:
5
6 4 2 7 4

Output:
3 5

Explanation:
The minimum integer from the array is 2.
The maximum integer from the array is 7.
The integers between 2 to 7 are 3 4 5 and 6. Here 4 and 6 are present in the array.
The integers 3 and 5 are not present in the array.
Hence the output is 3 5*/

solution:
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // sort ascending (your logic was fine)
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int min = arr[0];
    int max = arr[n-1];
    int found = 0;   // flag: did we print any missing number?

    for(int v = min; v <= max; v++){
        int present = 0;
        for(int k = 0; k < n; k++){
            if(arr[k] == v){
                present = 1;
                break;
            }
        }
        if(!present){//same as that of (present==0)
            printf("%d ", v);
            found = 1;
        }
    }

    if(!found){
        printf("-1");
    }
    return 0;
}
