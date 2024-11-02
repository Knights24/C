#include <stdio.h>

int main(){

    int age = 21;
    int *ptr = &age; //to  store the address of age variable 
    int _age = *ptr;  //to access the value of that address who store in ptr variable



    
    // printf("%u\n",&age); //to print the address of age
    // printf("%u\n",ptr); //to print the value of ptr variable
    // printf("%u\n",&ptr); //to print the address of ptr



    printf("%d",age);
    printf("%d",*ptr); //to print the value of that address value who store in ptr variable as address
    printf("%d",*(&age));
   return 0;
}