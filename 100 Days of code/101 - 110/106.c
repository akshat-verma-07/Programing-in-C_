/*
Q106: Brute force next greater element.

Sample:
[1,3,2,4] → 3,4,4,-1
*/

#include <stdio.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int nge = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge = arr[j];
                break;
            }
        }
        printf("%d", nge);
        if (i != n - 1) printf(", ");
    }

    return 0;
}
