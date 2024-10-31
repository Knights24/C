#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2==0){
    printf("%d divided by 2",a);
    } 
    else {
        printf("Write again");
    }
    return 0;

}