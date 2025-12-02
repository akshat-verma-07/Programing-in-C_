#include <stdio.h>

int main(){
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    scanf("%d",&n);

    int total = n*(n+1)/2;

    for(int x=1; x<=n; x++){
        int left = x*(x+1)/2;
        int right = total - (x-1)*x/2;
        if(left == right){
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
