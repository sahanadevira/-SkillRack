/*The program must accept N integers as the input. The program must swap the first and the last even integers, then the program must swap the second and second but last even integers and so on. Then the program must print the modified integers as the output.

Note: Number of even integers will be always even.

Boundary Condition(s):
1 <= N <= 10000

Input Format:
The first line contains the integer N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains N integers separated by space(s).

Example Input/Output 1:
Input:
10
67 12 10 23 20 41 60 40 21 16

Output:
67 16 40 23 60 41 20 10 21 12

Explanation:
The first and the last even elements are 12 and 16. After swapping those the elements are 16 and 12 (67 16 10 23 20 41 60 40 21 12).
The second and the last from second even elements are 10 and 40. After swapping those the elements are 40 and 10 (67 16 40 23 20 41 60 10 21 12).
The third and the last from third even elements are 60 and 20. After swapping those the elements are 20 and 60 (67 16 40 23 60 41 20 10 21 12).
Hence the output is 67 16 40 23 60 41 20 10 21 12

Example Input/Output 2:
Input:
5
2 18 24 5 12

Output:
12 24 18 5 2*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int arr2[10000];   
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            arr2[count] = i;
            count++;
        }
    }

    for(int i = 0; i < count / 2; i++){
        int left = arr2[i];
        int right = arr2[count - i - 1];   

        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
