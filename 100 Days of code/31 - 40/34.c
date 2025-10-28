#include <stdio.h>
int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
    printf("\n--------------------------------------\n");
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n <= 1) flag = 1;
    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Prime");
    else
        printf("Not prime");
    return 0;
}
