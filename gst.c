#include <stdio.h>

void gst(float n);

int main(){
    float n = 100.0;

    gst(n);

    return 0;

}

void gst(float n){

    n = n+(n*0.18);
    printf("Final price : %f",n);

}