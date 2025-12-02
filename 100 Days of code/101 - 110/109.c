/*
Q109: Max sum of all subarrays of size k.

Sample:
[100,200,300,400], k=2 → 700
*/

#include <stdio.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    scanf("%d", &k);

    int max = -1000000;

    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++) {
            sum += arr[i + j];
        }
        if (sum > max) max = sum;
    }

    printf("%d", max);
    return 0;
}
