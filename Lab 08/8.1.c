/*5.1. Declare a global variable outside all functions and use it inside various functions to 
understand its accessibility. */
#include <stdio.h> 
int globalvariable=100; 
void gv(){ 
printf("global variable accessed by calling function  = %d",globalvariable); 
} 
int main(){ 
printf("global variable accessed in main function = %d\n",globalvariable); 
gv(); //function calling inside another function to access the global variable 
return 0; 
}
