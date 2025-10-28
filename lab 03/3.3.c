
/*WAP to compute the BMI Index of the person and print the BMI values as per the 
following ranges.  
You can use the following formula to compute BMI= 
weight(kgs)/Height(Mts)*Height(Mts).*/ 
 
#include <stdio.h> 
int main(){ 
    double weight,height,bmi; 
 
    printf("enter weight(in kgs)"); 
    scanf("%lf",&weight); 
    printf("enter height(in mts)"); 
    scanf("%lf",&height); 
 
    bmi=weight/(height*height); 
 
    if (bmi<=15){ 
        printf("Starvation (bmi=%.2lf)",bmi); 
    } 
   else if (bmi>15&&bmi<=17.5){ 
        printf("Anorexic (bmi=%.2lf)",bmi); 
    } 
    else if (bmi>17.5&&bmi<=18.5){ 
        printf("Underweight (bmi=%.2lf)",bmi); 
    }  
else if (bmi>18.5&&bmi<=24.9){ 
printf("Ideal (bmi=%.2lf)",bmi); 
} 
else if (bmi>=25&&bmi<=25.9){ 
printf("Overweight (bmi=%.2lf)",bmi); 
} 
else if (bmi>25.9&&bmi<=39.9){ 
printf("Obese (bmi=%.2lf)",bmi); 
} 
else if (bmi>=40){ 
printf("Morbidly Obese (bmi=%.2lf)",bmi); 
} 
return 0; 
}
