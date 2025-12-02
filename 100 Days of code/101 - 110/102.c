#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, x;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&x);

    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i] >= x){
            ans = i;
            break;
        }
    }

    printf("%d", ans);
    return 0;
}
