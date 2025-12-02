/*
Q105: Majority Element = appears more than n/2 times.
If not present → print -1.

Sample:
[3,2,3] → 3
*/

#include <stdio.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int candidate = a[0], count = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = a[i];
            count = 1;
        }
    }

    int freq = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == candidate)
            freq++;

    if (freq > n/2) printf("%d", candidate);
    else printf("-1");

    return 0;
}
