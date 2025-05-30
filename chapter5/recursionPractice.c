#include <stdio.h>
void printCountingUsingLoop(int n);
void printCountingByUsingRecursion2(int n);
void printCountingByUsingRecursion1(int n);

void main(){
    int n = 5;
    // printCountingUsingLoop(n);
    // printCountingByUsingRecursion1(n);
    printCountingByUsingRecursion2(n);
}

void printCountingUsingLoop(int n){
    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
}

void printCountingByUsingRecursion1(int n){
    if(n == 0){
        return;
    }
    else{
        printf("%d\n", n);
        printCountingByUsingRecursion1(--n);
    }
}

void printCountingByUsingRecursion2(int n){
    if(n == 0){
        return;
    }
    else{
        printf("%d\n", n);
        printCountingByUsingRecursion2(--n);
    }
}