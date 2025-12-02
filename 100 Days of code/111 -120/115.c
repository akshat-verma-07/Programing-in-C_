/*
Q115: Check if two strings are anagrams.

Sample:
"anagram", "nagaram" → Anagram
"rat", "car" → Not Anagram
*/

#include <stdio.h>
#include <string.h>

int main() {

    printf("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    char s1[200], s2[200];
    scanf("%s", s1);
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }

    int freq[26] = {0};

    for(int i=0; i<strlen(s1); i++) {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    for(int i=0; i<26; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
