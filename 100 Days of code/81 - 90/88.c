#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    fgets(str,1000,stdin);

    for(int i=0; str[i]; i++) {
        if(str[i]==' ') printf("-");
        else if(str[i]!='\n') printf("%c",str[i]);
    }

    return 0;
}
