#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    float cost, sell, percent;
    scanf("%f %f", &cost, &sell);

    if (sell > cost) {
        percent = ((sell - cost) / cost) * 100;
        printf("Profit %.0f%%", percent);
    } else if (sell < cost) {
        percent = ((cost - sell) / cost) * 100;
        printf("Loss %.0f%%", percent);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}
