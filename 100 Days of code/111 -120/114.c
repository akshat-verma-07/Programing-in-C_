/*
Q114: Find length of longest substring without repeating characters.

Sample:
"abcabcbb" → 3
"bbbbb" → 1
"pwwkew" → 3
*/

#include <stdio.h>
#include <string.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char s[200];
    scanf("%s", s);

    int n = strlen(s);
    int max = 0;

    for(int i=0; i<n; i++) {
        int freq[256] = {0};
        int len = 0;

        for(int j=i; j<n; j++) {
            if(freq[(int)s[j]] == 1)
                break;

            freq[(int)s[j]] = 1;
            len++;
        }

        if(len > max)
            max = len;
    }

    printf("%d", max);
    return 0;
}
