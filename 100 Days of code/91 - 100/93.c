#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char a[1000], b[1000];
    scanf("%s %s", a, b);

    if(strlen(a) != strlen(b)) {
        printf("Not anagrams");
        return 0;
    }

    int freq[256] = {0};

    for(int i=0; a[i]; i++) {
        freq[a[i]]++;
        freq[b[i]]--;
    }

    for(int i=0; i<256; i++)
        if(freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }

    printf("Anagrams");
    return 0;
}
