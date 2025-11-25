#include <stdio.h>

int main() {
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");

    long long n;
    scanf("%lld", &n);

    int freq[10] = {0};

    while(n > 0){
        int d = n % 10;
        freq[d]++;
        n /= 10;
    }

    int maxDigit = 0;
    for(int i = 1; i < 10; i++)
        if(freq[i] > freq[maxDigit])
            maxDigit = i;

    printf("%d", maxDigit);

    return 0;
}
