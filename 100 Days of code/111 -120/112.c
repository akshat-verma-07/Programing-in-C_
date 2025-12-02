/*
Q112: Find maximum sum of any contiguous subarray (Kadane). 
If all are negative, print the largest element.

Sample:
[2,3,-8,7,-1,2,3] → 11
[-2,-4] → -2
[5,4,1,7,8] → 25
*/

#include <stdio.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    int max_so_far = a[0];
    int curr = a[0];

    for(int i=1; i<n; i++) {
        if(curr + a[i] < a[i])
            curr = a[i];
        else
            curr += a[i];

        if(curr > max_so_far)
            max_so_far = curr;
    }

    printf("%d", max_so_far);
    return 0;
}
