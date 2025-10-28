/*4.3.9 */
#include <stdio.h> 
int main() { 
     
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
    printf("\n--------------------------------------\n"); 
     
    for (int i = 1; i <= 5; i++) { 
        for (int k = 1; k <= (5 - i); k++) { 
            printf("  ");  
        } 
 
        for (int j=5;j>=(6-i);j--){ 
            printf(" %d",j); 
        } 
 
        for (int n=(7-i);n<=5;n++){ 
            printf(" %d",n); 
        } 
 
        printf("\n"); 
    } 
 
    for (int i=4; i>=1; i--){ 
        for (int k = 1; k <= (5 - i); k++) { 
            printf("  ");  
        } 
 
for (int j=5;j>=(6-i);j--){ 
printf(" %d",j); 
} 
for (int n=(7-i);n<=5;n++){ 
printf(" %d",n); 
} 
printf("\n"); 
} 
return 0; 
}
