/* 4.3.5 */ 
#include <stdio.h> 
int main() { 
printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
printf("\n--------------------------------------\n"); 
for (int i = 1; i <= 5; i++) { 
for (int k = 1; k <= (5 - i); k++) { 
printf(" ");  
} 
for (int j=1; j<=i; j++){ 
printf("%d",j); 
} 
printf("\n");  
} 
return 0; 
}
