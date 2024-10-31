#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of A:  ");
    scanf("%d",&a);
    printf("\nEnter the value of B:  ");
    scanf("%d",&b);
    printf("Enter the valuye of C:  ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("\n %d Is the biggest number ",a);
        }
        else{
            printf("\n %d Is the biggest number ",c);
        }
    }
    else if(b>c){
        printf("\n %d Is the biggest number",b);
    }

    else{
        printf("\n %d Is the biggest number ",c);
    }

    return 0;
}