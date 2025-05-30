#include <stdio.h>
#include <windows.h>
#define DEF
#define NO
#define YES
#define MESS(m) printf("m")
#define ISUPPER(x) (x >= 65 && x <= 90)
#define ISLOWER(x) (x >= 97 && x <= 122)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define This
#define That
#define Mean(a,b,c,d,e) (a+b+c+d+e)/5
#define Cube(x) (x*x*x)
#define DATATYPE char *
#define MYFILE "conio.h"
#include MYFILE

void Q1(){
    int i = 2;
    #ifdef DEF
        printf("square of i = %d", i*i);
    #else
        printf("i = %d", i);
    #endif
}

void Q2(){
    int i = 5, j;
    if(i > 5)
        // j = YES;//error because YES and NO only defined in macros without any value
    // else    
        // j = NO;
    printf("%d", j);
}

void Q3(){
    MESS("But somewhere in wicked miserable past.");
    MESS("There must have been a moment of truth!");
}

void Q6(){
    char ch = '+';
    if(ISALPHA(ch))
        printf("ch contains an alphabet");
    else
        printf("ch doesn't contain an alphabet");
}

// void Q7(){
//     #ifdef This
//         #ifdef That
//             printf("Definitions are hard to digest\n");
//         #else //use endif because error: unterminated #ifdef
//             printf("But Once mugged up, hard to forget");
//     #endif
// }

void Q9(){
    int a,b,c,d,e,m;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;
    m = Mean(a,b,c,d,e);
    printf("Mean of the five number is %d", m);
}

void Q11(){
    int a,b;
    b = 3;
    a = Cube(b++)/b++;
    printf("a = %d b = %d", a, b);
}

void Q12(){
    int a, b = 1;
    a = b++*b++;
    printf("a = %d b = %d", a, b);
}

void Q19(){
    DATATYPE s;
    s = (char*)0xb8000000;
    *s = 'A';
}

// void Q27(){
//     window (10,10,40,15);
//     cprintf("A pinch of probably is much better than.....");
//     cprintf("A pound of perhaps!");
// }

void main(){
    // Q1();
    // Q2();
    // Q3();
    // Q6();
    // Q7();
    // Q9();
    // Q11();
    // Q12();
    Q19();//doubt to ask 
    // Q27();
}