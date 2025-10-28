#include <stdio.h>
int globalvariable=100;

void local(){
    int localvariable=50;
    
    printf("Accessing global variable = %d\n",globalvariable);
    printf("Accessing local variable = %d",localvariable);
}

int main(){

    local();

    printf("Accessing local varibale from function local to main = %d",localvariable); /* this will fail on purpose
                                                                                        to show scope of local variable */
    return 0;
}
