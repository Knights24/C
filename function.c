#include <stdio.h>

void indian();
void franch();

int main(){
    char A;
    printf("Type I or F :");
    scanf("%c",&A);
    if(A=='I'|| A=='i'){
        indian();
    }
    else if(A=='F'|| A=='f'){
        franch();
    }
    else{
        printf("type again");
    }

    return 0;
}

void indian(){
    printf("Namaste");
}

void franch(){
    printf("Bonjour");
}