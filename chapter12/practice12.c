#include <stdio.h>
void practice1(){
    struct num{
        unsigned a:1;
        unsigned b:2;
        unsigned c:3;
        unsigned d:4;
    };
    struct num n;
    n.a = 0;
    n.b = 2;
    n.c = 5;
    n.d = 14;
    printf("%d %d %d %d", n.a, n.b, n.c, n.d);
    printf("\n%d", sizeof(struct num));
}

void practice2(){
    // int practice1(); //it is not correct way of defining a function in another function
    int(*fpointer)();

    fpointer = practice1;
    (*fpointer)();
    printf("%d", practice1);
}

void question1(){
    int i = 32, j = 65, k;
    k = i|35;
    printf("k = %d\n", k);
    k = ~k;
    printf("k = %d\n", k);
    k = i & j;
    printf("k = %d\n", k);
}

void question3(){
    int a = 3, b = 2, c = 1, d;
    d = a | b &c, // priority of AND operator is higher then OR operator
    printf("d = %d\n", d);
    d = a | b & ~ c;
    printf("d = %d \n");
}

void question6(){
    int a = 12, i = 0;
    while (a >>= i){ // a right shifted to i times
        printf("a = %d i = %d\n", a, i);
        i++;
    }
}

void question10(){
    enum status {low, medium, high};
    enum status rain;
    rain = 0;
    if(rain == low){
        printf("rain = %d", rain);
    }
}

void question12(){
    typedef struct{
        char name[20];
        int age;
    }a;
    a emp = {"Sunil", 30};
    printf("%s %d", emp.name, emp.age);
}

void question13(){
    struct address{
        char city[20];
        int pin;
    };
    typedef struct address *ADDR;
    ADDR addr;
    static struct address a = {"Jodhpur", 20};
    addr = &a;
    printf("%s %d", addr->city, addr->pin);
}

void question15(){
    struct num{
        unsigned bit0 : 1;
        unsigned bit1 : 1;
        unsigned bit2 : 1;
        unsigned rest : 5;

    };
    union a{
        struct num n;
        char ch;
    }b;
    b.ch = 32;
    printf("%d %d %d %d", b.n.bit0, b.n.bit1, b.n.bit2, b.n.rest);
}

show1(){
    printf("Diamonds are forever");
}

void question16(){
    int (*f)();
    f = show1;
    printf("address = %d\n", f);
    (*f)();
}

display(ff)
int(*ff)();
{
    (*ff)();
}

show(){
    printf("On the rebound...");
}

void question17(){
    int (*f)();
    f = show;
    display(f);
}

fun1(){
    printf("Hail ");
}
fun2(){
    printf("the ");
}
fun3(){
    printf("viruses!");
}

question18(){
    int i, fun1(), fun2(), fun3();
    int (*f[3])();
    f[0] = fun1;
    f[1] = fun2;
    f[2] = fun3;
    for(i = 0; i <= 2; i++)
        (*f[i])();
}

void main(){
    // practice1();
    // practice2();
    // question1();
    // question3();
    // question6();
    // question10();
    // question12();
    // question13();
    // question15();
    // question16();
    // question17();
    question18();
}