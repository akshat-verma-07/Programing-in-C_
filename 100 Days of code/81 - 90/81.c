#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    fgets(str,1000,stdin);

    int count=0;
    while(str[count] != '\0' && str[count] != '\n')
        count++;

    printf("%d",count);
    return 0;
}
