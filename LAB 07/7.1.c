/*4.4. The population of a town is 100000. The population has increased steadily at the 
rate of 10% per year for the last 10 years. Write a program to determine the population 
at the end of each year in the last decade. */
#include <stdio.h> 
int main(){ 
printf ("Name - AKSHAT VERMA\nSAP_ID-590026318\nCourse-BCA\nBatch-6"); 
printf("\n--------------------------------------\n"); 
double pop,rate,npop; 
pop=100000; 
rate=0.10f; 
npop=0; 
for (int i=1; i<=10; i++){ 
npop=pop + (pop*rate); 
pop=npop; 
printf("The Population at the end of year %d is = %0.lf\n",i,pop); 
} 
return 0; }
