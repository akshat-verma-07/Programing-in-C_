/*4.3.3 */
#include <stdio.h> 
int main() { 
printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
printf("\n--------------------------------------\n"); 
int count=1; 
for (int i = 1; i <= 5; i++) { 
for (int j = 1; j<=i; j++) { 
printf("%d ", count++);  
} 
printf("\n");  
} 
return 0; 
}
