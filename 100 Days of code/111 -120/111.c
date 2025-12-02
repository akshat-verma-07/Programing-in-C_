/*
Q111: Write a program to take an integer array arr and an integer k as inputs.
Find the first negative integer in every window of size k.
If no negative, print 0.

Sample:
[-8, 2, 3, -6, 10], k=2 → -8 0 -6 -6
[12, -1, -7, 8, -15, 30, 16, 28], k=3 → -1 -1 -7 -15 -15 0
[12, 1, 3, 5], k=3 → 0 0
*/

#include <stdio.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for(int i=0; i <= n - k; i++) {
        int found = 0;
        for(int j=i; j < i+k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if(!found)
            printf("0 ");
    }

    return 0;
}
