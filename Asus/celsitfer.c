#include <stdio.h>

float far(float cel);
int main(){
   
    printf("%f",far(27));
    return 0;
}

float far(float cel){
    float farenhit = cel * (9.0/5.0) + 32;
    return farenhit;
}