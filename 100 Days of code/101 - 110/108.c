/*
Q108: answer[i] = product of all except nums[i]

Sample:
[1,2,3,4] → 24 12 8 6
*/

#include <stdio.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d", &n);

    int a[n], ans[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (j != i)
                prod *= a[j];
        }
        ans[i] = prod;
    }

    for (int i = 0; i < n; i++) printf("%d ", ans[i]);

    return 0;
}
