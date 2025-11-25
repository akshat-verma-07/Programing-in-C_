#include <stdio.h>

int main(){
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n, x, i, pos;
    scanf("%d", &n);

    int a[n+1];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    pos = n;
    for(i = 0; i < n; i++){
        if(x < a[i]){
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;

    for(i = 0; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
