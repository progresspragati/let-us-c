#include <stdio.h>
#include <string.h>

void xstrstr(){
    char str1[] = "somewhere over the rainbow";
    int x = strlen (str1);
    char str2[] = "over1";
    int y = strlen (str2);
    printf("%d, %d\n", x, y);
    int t = 0;
    for(int i = 0; i < x; i++){
        // printf("%s", str1[i]);
        t = strncmp((str1+i), str2, y);
        // printf("%d\n", t);
        if(t == 0){
            printf("true");
        }
        else{
            printf("false %d", t);
            break;
        }
    }
}

void encodeString(){
    char s[] = "man's reach must always exceed his grasp.... or what is the heaven for? ";
    char p[strlen(s)];
    for(int i = 0; i < strlen(s); i++){
        p[i] = s[i] +i;
        printf("%c", p[i]);
    }
    printf("\n");
    for(int i = 0; i < strlen(s); i++){
        printf("%c", p[i] - i);
    }
}

void countCapitalLetters(){
    static char *str[] = {
                            "A FRiend is ....",
                            "SomEone Loving & trUE...",
                            "fOr insTance somEONE....",
                            "exactlY likE yoU !!"
                        };
    int counter = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j <= strlen(str[i]); j++){
            if(str[i][j] >= 'A' && str[i][j] <= 'Z'){
                counter++;
            }
        }
    }
    printf("%d", counter);
}

void printPolindromeString(){
    static char *s[] = {
                            "MalayalaM",
                            "To really mess things up...",
                            "One needs to know C !!",
                            "able was | ere | saw elba"
                        };
    char p[20];
    char q[20];
    int l;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < strlen(s[i])/ 2; j++){
            p[j] = s[i][j];
            q[j] = s[i][strlen(s[i])-1-j];
        }
        l = strncmp(p, q, strlen(s[i])/ 2);
        if(l == 0){
            printf("%s\n", s[i]);
        }
    }
}

void eliminateAndRestoreBlank(){
    char s[] = "Imperial Palace.    Rome";
    char p[strlen(s)];
    int j = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != ' '){
            p[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
    printf("%s", p);
}

void main(){
    // xstrstr();
    // encodeString();
    // countCapitalLetters();
    // printPolindromeString();
    eliminateAndRestoreBlank();
}