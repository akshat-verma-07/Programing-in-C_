/*4.5. Ramanujan Number is the smallest number that can be expressed as the sum of 
two cubes in two diAerent ways. WAP to print all such numbers up to a reasonable limit. 
Example of Ramanujan number: 1729 
12^3 + 1^3 and 10^3 + 9^3. for a number L=20(that is limit) */
 
#include <stdio.h>  
 
int main() {\ 
    printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
    printf("\n--------------------------------------\n"); 
     
    int limit = 20;  
 
    for (int a = 1; a <= limit; a++) { 
        for (int b = a; b <= limit; b++) { 
            int sum1 = a * a * a + b * b * b; 
 
            for (int c = a + 1; c <= limit; c++) { 
                for (int d = c; d <= limit; d++) { 
                    int sum2 = c * c * c + d * d * d; 
 
                    if (sum1 == sum2) { 
                        printf("Ramanujan number: %d\n", sum1); 
                        printf("  = %d^3 + %d^3\n", a, b); 
                        printf("  = %d^3 + %d^3\n", c, d); 
                        printf("---------------------\n"); 
                    } 
                } 
} 
} 
} 
return 0; 
}
