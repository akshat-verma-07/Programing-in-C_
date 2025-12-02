#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000], ch;
    scanf("%s",str);
    scanf(" %c",&ch);

    int count=0;
    for(int i=0; str[i]; i++)
        if(str[i]==ch)
            count++;

    printf("%d",count);
    return 0;
}
