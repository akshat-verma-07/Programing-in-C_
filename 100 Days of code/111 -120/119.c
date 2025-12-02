/* 
Q119: Write a program to take an integer array as input. 
Only one element will be repeated. Print the repeated element.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int seen[10000] = {0};
    int x, repeated = -1;

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        if(seen[x] == 1)
            repeated = x;
        seen[x] = 1;
    }

    printf("%d", repeated);

    return 0;
}
