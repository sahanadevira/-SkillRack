/*An array of N numbers is passed as input. The program must print all the LEADERS in the array. A number is a LEADER if it is greater than all the numbers to it’s right.

Note: The rightmost number is always a leader.

Input Format:
The first line contains N numbers, each separated by a space.

Output Format:
The first line contains the LEADERS, each separated by a space.

Boundary Conditions:
1 <= N <= 9999

Example Input/Output 1:
Input:
10 17 4 3 5 2

Output:
17 5 2*/
#include <stdio.h>

int main()
{
    int arr[10000];
    int n = 0;

    // read numbers until input ends
    while(scanf("%d", &arr[n]) == 1){
        n++;
    }

    for(int i = 0; i < n; i++){
        int leader = 1;   // assume arr[i] is a leader
        for(int j = i + 1; j < n; j++){
            if(arr[i] <= arr[j]){   // found a number on the right that is >= it
                leader = 0;
                break;
            }
        }
        if(leader){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
