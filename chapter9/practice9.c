#include <stdio.h>

void example(){
    static char *names[] = {
                                "Nagpur",
                                "Agra",
                                "Delhi",
                                "Calcutta"
    };
    int i;
    for(i = 0; i <= 3; i++){
        printf("%s\n", names[i]);
    }
}

void question2(){
    char ch1[20];
    int i;
    for(i = 0; i < 19; i++)
        *(ch1+i) = 67;
    *(ch1+i) = '\0'; // needed statement
    printf("%s", ch1);
}

void question7(){
    static char s[] = "C smart !";
    int i;
    for(i = 0; s[i]; i++)
        printf("%c %c %c %c\n", s[i], *(s+i), i[s], *(i+s));
}

void quesion10(){
    static char arr[] = "Pickpocketing my peace of mind..";
    int i;
    printf("%c\n", *arr);
    // arr++; //error: lvalue required as increment operand
    printf("%c\n", *arr);
}

void quesion11(){
    static char str[] = "Limericks";
    char *s;
    s = &str[6] - 6;
    while(*s)
        printf("%c", *s++);//post increment used
}

void question12(){
    static char *s[] = {
                            "ice",
                            "green",
                            "cone",
                            "please"
                        };
    static char **ptr[] = {s+3, s+2, s+1, s};
    char ***p = ptr;
    printf("%s\n", **++p);
    printf("%s\n", *--*++p + 3);
    printf("%s\n", *p[-2] + 3);
    printf("%s\n", p[-1][-1] + 1);
}

question22(){
    static char *mess[] = {
                                "some love one",
                                "some love two",
                                "I love one",
                                "this is you"
                            };
    printf("%d %d", sizeof(mess), sizeof(mess[1]));
}

void question24(){
    static char names[5][20] = {
                                    "Roshni",
                                    "Manish",
                                    "Mona",
                                    "Bajju",
                                    "Ritu"
                                };
    int i;
    char *t;
    t = names[3];
    // names[3] = names[4];//error: assignment to expression with array type // changes in base address not allowed
    // names[4] = t;// error: assignment to expression with array type //changes in base address not allowed
    for(i = 0; i <= 4; i++){
        printf("%s\n", names[i]);
    }

}

void question26(){
    static char mess[2][2][25] = {
                                    {
                                        "A chink in your armour",
                                        "A voice in your mail box"
                                    },
                                    {
                                        "A foot in your tooth",
                                        "A hole in your pocket"
                                    }
                                };
    printf("%s\n%s", mess[1][0], mess[0][1]);
}

void main(){
    // example();
    // question2();
    // question7();
    // question10();
    // quesion11();
    // question12();
    // question22();
    // question24();
    question26();
}