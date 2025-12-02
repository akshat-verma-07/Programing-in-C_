#include <stdio.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char str[1000];
    scanf("%s", str);

    int freq[26] = {0};

    for(int i=0; str[i]; i++) {
        int idx = str[i] - 'a';
        if(freq[idx] == 1) {
            printf("%c", str[i]);
            return 0;
        }
        freq[idx]++;
    }

    printf("-1");
    return 0;
}

