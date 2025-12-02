#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    scanf("%s",str);

    int n=strlen(str);

    for(int i=n-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}
