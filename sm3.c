#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);    
    printf("Enter the value of C : ");
    scanf("%d",&c);

    if(a<b){
       if(a<c){
        printf("A is small");
       }
       else{
        printf("c is  small");
       }
    }
    else if(b<c){
        printf("B is small");
    }

    else {
        printf("C is small");
    }
    return 0;
}