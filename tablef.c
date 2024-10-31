#include <stdio.h>

void printTable(int n);

int main(){
    int n;
    printf("Enter the table number : ");
    scanf("%d",&n);


    printTable(n);
    
}

void printTable(int n){
    for(int i = 1; i <=10; i++){
        int mul = i*n;
        printf("%d \n",mul);
    }


}