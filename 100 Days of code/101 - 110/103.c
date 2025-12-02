#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int total = 0;
    for(int i=0;i<n;i++) total += arr[i];

    int leftSum = 0;
    for(int i=0;i<n;i++){
        if(leftSum == total - leftSum - arr[i]){
            printf("%d", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1");
    return 0;
}
