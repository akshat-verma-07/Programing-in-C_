#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    fgets(str,1000,stdin);

    printf("%c.", str[0]);  

    for(int i=1; str[i]; i++) {
        if(str[i]==' ' && str[i+1]!='\0' && str[i+1]!='\n')
            printf("%c.", str[i+1]);
    }

    return 0;
}
