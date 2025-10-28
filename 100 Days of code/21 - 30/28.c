#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int n;
    long long product = 1;
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("%lld", product);
    return 0;
}
