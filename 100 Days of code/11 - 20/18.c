#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    int percent;
    scanf("%d", &percent);

    if (percent >= 90 && percent <= 100)
        printf("Grade A");
    else if (percent >= 80)
        printf("Grade B");
    else if (percent >= 70)
        printf("Grade C");
    else if (percent >= 60)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}
