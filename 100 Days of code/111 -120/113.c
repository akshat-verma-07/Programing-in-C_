/*
Q113: Find the kth smallest element in an array.

Sample:
[10,5,4,3,48,6,2,33,53,10], k=4 → 5
[7,10,4,3,20,15], k=3 → 7
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

    // Simple selection sort partial
    for(int i=0; i<k; i++) {
        int min=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min])
                min=j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("%d", arr[k-1]);
    return 0;
}
