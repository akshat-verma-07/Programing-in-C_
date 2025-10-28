#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    long long fact = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("%lld", fact);
    return 0;
}
