#include <stdio.h>

int main(){
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, key;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = -1;

    while(low <= high){
        mid = (low + high) / 2;
        if(a[mid] == key){
            found = mid;
            break;
        }
        else if(key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found != -1) printf("Found at index %d", found);
    else printf("-1");

    return 0;
}
