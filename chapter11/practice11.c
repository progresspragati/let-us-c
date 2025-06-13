#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void practice1(){
    printf("Hello\b world\n");
    printf("Hello\f world\n");
    printf("Paras\'s Pragati\n");
    printf("Paras\vs Pragati\n");
    printf("Hello\t world\n");
    printf("Hello\r world\n");
    printf("Hello world\r\n");
    printf("Hello\a world\n");//In modern IDEs (like Code::Blocks, VSCode), the bell might be suppressed.
    printf("Hello world\"\n");
    printf("Hello world\\\n");
}

void practice2(){
    int i = 334;
    float j = 23.55656;
    printf("%10d\n", i);
    printf("%8.2f\n", j);
    printf("%-8.2f\n", j);
    // getch();
    // getche();
    // fgetchar();
    // getchar();
    // char c;
    // printf("Enter a character: ");
    // c = getchar();
    // printf("You entered: %c\n", c);
    // char ch[];
    char ch[10] ;
    gets(ch);
    // char x = '7';
    // putch(x);
    // fputchar(x);
    // putchar(x);
    // char s[] = "HEllo";
    // puts(s);
}

void question5(){
    printf("Hello\b\b\b\b\b");
    printf("Hi!\b\b\bBye");
}

void question9(){
    char str1[30], str2[30];

    printf("Enter a sentence\n");
    scanf("%s", str1);
    printf("%s", str1);//the moment a space(or a tab or a newline) is typed, scanf() assumes you have finished supplying information, and hence ignores whetever follows
    fflush(stdin);
    printf("\nEnter a sentence\n");
    gets(str2);
    printf("%s", str2);
}

void question10(){
    char name[20];
    char sname[20];
    puts("Enter your name and surname\n");
    // gets( name, sname );//error: too many arguments to function 'gets'
    // puts( name, sname );//error: too many arguments to function 'gets'
    gets(name);
    gets(sname);
    puts(name);
    puts(sname);
    printf("%s %s", name, sname);

}

// void question11(){
//     FILE *fp;
//     char str[80] = "i am a girl";
//     fp = fopen("ENGINE.c", "r");
//         char ch;
//      while ( fgets(str, 80, fp) != EOF) {
//         putchar(ch);  // prints each character
//     }
//     fclose(fp);
// }

void question12(){
    char str[20] = "i am a girl";
    printf("%p\n", (void *)"ENGINEh.C");
    FILE *fp;
    fp = fopen (strcpy ( str, "ENGINE.C"), "w");
        // Write sample data
    fprintf(fp, "/* ENGINE.C - Sample Engine Module */\n");
    fprintf(fp, "#include <stdio.h>\n\n");
    fprintf(fp, "void startEngine() {\n");
    fprintf(fp, "    printf(\"Engine started.\\n\");\n");
    fprintf(fp, "}\n\n");
    fprintf(fp, "void stopEngine() {\n");
    fprintf(fp, "    printf(\"Engine stopped.\\n\");\n");
    fprintf(fp, "}\n");
    fclose ( fp );
    printf("%s", str);
}

void question14(){
    FILE *fp;
    char c;
    fp = fopen("try.c", "r");
    if(fp = NULL){         //error: null pointer assignment in turbo c
        puts("can not open file");
        exit(1);
    }
    while((c = getc(fp)) != EOF)
        putch(c);

    fclose(fp);
}

void question15(){
    FILE *fp, *fs, *ft;
    fp = fopen("A.C", "r");
    ft = fopen("B.C", "r");
    fs = fopen("C.C", "r");
    // fclose(fp, fs, ft); //too many arguments to function 'fclose'
}

void question16(){
    char name[20], name1[20];
    int age, age1;
    printf("Enter name and age\n");
    scanf("%s %d", name, &age);
    printf("%s %d", name, age);

    printf("\nEnter name and age\n");
    fscanf(stdin, "%s %d", name1, &age1);
    fprintf(stdout, "%s %d", name1, age1);
}

void question18(){
    static char str[] = "Triplet";
    char *s;

    s = str;
    while(*s)
    {
        putc (*s, stdout);
        fputchar(*s);
        printf("%c\n", *s);
        s++;
    }
}

void question19(argc, argv)
int argc;
char*argv[];{
    printf("%d\n", argc);
    printf("%s", argv[0]);
}

int question19b(int argc, char *argv[]) {
    printf("%d\n", argc);     // Prints the number of arguments
    printf("%s\n", argv[0]);  // Prints the name of the program (e.g., ./a.out)
    return 0;
}

void question22(){
    char ch = 'z';
    static char str[] = "Zebra";
    putc(ch, stdout);//error: 'stdprn' undeclared (first use in this function), stdprn not supported in gcc
    fprintf(stdout, "%s", str);// can use stdout inplace of stdprn to print output
    fwrite(str, 5, 1, stdout);
    fputs(str, stdout);
}

void question23(){
    struct a{
        char city[10];
        int pin;
    };
    static struct a b = {"Udaipur", 20};
    static char c[] = "Bangalore";
    FILE *fp;

    fp = fopen("TRIAL", "wb");
    fwrite(&b, sizeof (b), 1, fp);
    fwrite(c, 9, 1, fp);
}

void main(){
    // practice1();
    // practice2();
    //  question5();
    //  question9();
    // question10();
    // question11();//doubt
    // question12();//doubt
    // question14();
    // question15();
    // question16();
    // question18();
    // question19();
    int argc;
    char *argv;
    // question19b(argc, *argv);
    // question22();
    question23();
}