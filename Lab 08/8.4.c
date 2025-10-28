#include <stdio.h>

void stat(){
    int regularvalue=0;
    static int staticvalue=0;

    regularvalue++;
    staticvalue++;

    printf("Static counter: %d,Regular counter: %d\n",staticvalue,regularvalue);

}

int main(){
    printf ("Name - AARUSH ARORA\nSAP_ID-590028941\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    
    stat();
    stat();
    stat();
}
