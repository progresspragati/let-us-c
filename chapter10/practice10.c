#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void example1(){
    struct account{
        int no;
        char acc_name[15];
        float bal;
    };
    struct account a1, a2, a3;

    printf("Enter acc nos., names, and balances \n");
    scanf("%d %s %f", &a1.no, a1.acc_name, &a1.bal);
    scanf("%d %s %f", &a2.no, a2.acc_name, &a2.bal);
    scanf("%d %s %f", &a3.no, a3.acc_name, &a3.bal);

    printf("\n%d %s %f", a1.no, a1.acc_name, a1.bal);
    printf("\n%d %s %f", a2.no, a2.acc_name, a2.bal);
    printf("\n%d %s %f", a3.no, a3.acc_name, a3.bal);//wrong input

}

void example2(){
    struct employee{
        int no;
        float bal;
    };
    struct employee a[10];
    int i;
    for(i = 0; i <= 9; i++){
        printf("Enter account number and balance");
        scanf("%d %f", &a[i].no, &a[i].bal);
    }
    for(i = 0; i <= 9; i++){
        printf("%d %f\n", a[i].no, a[i].bal);
    }
}

void example3(){
    struct player{
        char name[20];
        int age;
    };//p1 = {"nick yates", 30};
    // printf("%s %d", p1.name, p1.age);
    struct player p2, p1 = {"Nick Yates", 30};
    p2 = p1;
    printf("%s %d", p2.name, p2.age);
}

void question1(){
    struct employee{
        char name[25];
        int age;
        float bs;
    };
    struct employee e;
    // e.name = "Hacker";//expression must be a modiefiable lvalue // e.name get base address of array name[]
    // e.age = 25;
    printf("%s %d ", e.name, e.age);
}

struct virus{
    char signature[25];
    int size;
}v[2];//extern variable

question3(){
    // static struct v[0] = {"Yankee Doodle", 1813};//static , so there is error
    // static struct v[1] = {"Dark Avenger", 1795};
    int i ;
    for(i = 0; i <= 1; i++){
        printf("%s %d\n", v[i].signature, v[i].size);
    }
}

void question11(){
    struct s1{
        char *z;
        int i;
        struct s1*p;
    };
    static struct s1 a[] = {
                                {"Nagpur", 1, a+1},
                                {"Raipur", 2, a+2},
                                {"Kanpur", 3, a}
                            };
    struct s1 *ptr = a;
    printf("%s %s %s\n", a[0].z, ptr->z, a[2].p->z);
}

void question13(){
    struct s1{
        char *z;
        int i;
        struct s1*p;
    };
    static struct s1 a[] = {
                                {"Nagpur", 1, a+1},
                                {"Raipur", 2, a+2},
                                {"Kanpur", 3, a}
                            };
    struct s1 *ptr = a;
    printf("%s\n", ++(ptr->z));
    printf("%s\n", a[(++ptr)->i].z);
    printf("%s\n", a[--(ptr->p->i)].z);
}

void question16(){
    struct node{
        int data;
        struct node *link;
    };
    struct node *p, *q;

    p = malloc(sizeof (struct node));
    q = malloc (sizeof (struct node));

    printf("%d %d", sizeof(p), sizeof(q));
    // printf("%d", malloc(sizeof (struct node)));
}

union student{
    int student_age;
    long int student_rollno;
};



void main(){
    // example1();
    // example2();
    // example3();
    // question1();
    // question3();
    // question11();
    // question13();
    // question16();
    // struct student pragati;
    // pragati.student_age = 24;
    // pragati.student_rollno = 1595;
    // printf("%d %d\n", pragati.student_age, pragati.student_rollno);
    // printf("%d", sizeof(union student));
   
}