#include <stdio.h>

int main(){
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, i;
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max1 = -1e9, max2 = -1e9;

    for(i = 0; i < n; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] != max1){
            max2 = a[i];
        }
    }

    printf("%d", max2);

    return 0;
}
