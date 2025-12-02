/*
Q101: Given a sorted array (may contain duplicates) and a target,
print first and last occurrence index.
If target not found → print -1 -1.

Sample:
Input: nums = [5,7,7,8,8,10], target=8
Output: 3,4
*/

#include <stdio.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, target;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &target);

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            first = i;
            break;
        }
    }

    for (int i = n-1; i >= 0; i--) {
        if (a[i] == target) {
            last = i;
            break;
        }
    }

    printf("%d,%d", first, last);
    return 0;
}
