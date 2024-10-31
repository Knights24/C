#include <stdio.h>

int calper(int a, int b, int c);

int main(){
    printf("%d",calper(91,97,95));
    return 0;
}

int calper(int a, int b, int c){
  int percentage = ((a + b + c)/3);
   return percentage; 
}
