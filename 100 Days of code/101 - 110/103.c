/*
Q103: Pivot index → left sum == right sum.
If multiple pivots → print leftmost.
If none → print -1.

Sample:
[1,7,3,6,5,6] → Output: 3
*/

#include <stdio.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int total = 0;
    for (int i = 0; i < n; i++) total += a[i];

    int left_sum = 0;

    for (int i = 0; i < n; i++) {
        if (left_sum == total - left_sum - a[i]) {
            printf("%d", i);
            return 0;
        }
        left_sum += a[i];
    }

    printf("-1");
    return 0;
}
