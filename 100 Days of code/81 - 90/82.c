#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    scanf("%s",str);

    for(int i=0; str[i]!='\0'; i++)
        printf("%c\n",str[i]);

    return 0;
}
