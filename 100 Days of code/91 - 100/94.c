#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    fgets(str,1000,stdin);

    int maxLen=0, currLen=0, start=0, maxStart=0;

    for(int i=0; str[i]; i++) {
        if(str[i]==' ' || str[i]=='\n') {
            if(currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i+1;
        } else {
            currLen++;
        }
    }

    for(int i=maxStart; i<maxStart+maxLen; i++)
        printf("%c", str[i]);

    return 0;
}
