#include <stdio.h>
int main(){
    int localvariable=50;

    if(localvariable==50){
        int blockvariable=25;

        printf("Accessing local variable inside the block = %d",localvariable);
        printf("Accessing block variable inside the block = %d",blockvariable);
    }

    printf("Accessing local variable outside the block = %d",localvariable);
    printf("Accessing block variable outside the block = %d",blockvariable);
}
