#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int r,c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    int distinct = 1;
    for(int i=0;i<r;i++) {
        for(int j=i+1;j<r;j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct) printf("True");
    else printf("False");

    return 0;
}
