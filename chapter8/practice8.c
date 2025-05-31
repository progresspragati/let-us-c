#include <stdio.h>

void question2(){
    static int sub[5] = {10, 20, 30, 40, 50};
    int i;
    for(i = 0; i < 5; i++); //semicolon here reduced scope of for loop, so no output we will get
    {
        if(i<=4){
            sub[i] = i*i;
            printf("%d\n", sub[i]);
        }
    }
}

int b[5];
void question3(){
    static int a[5];
    int i;
    for(i = 0; i <= 4; i++)
        printf("%d %d\n", b[i], a[i]);//default value of static and extern variable is 0 , 0
}

void question5(){
    int size = 10;
    int arr[size];
    for(int i = 1; i <= size; i++){
        scanf("%d", &arr[i]);
        printf("%d\n", arr[i]);
    }
}

void question6(){
    int i, j = 10, arrsize;
    int arr[arrsize];
    if(j == 10){
        arrsize = 20;
        printf("%d", arrsize);
    }
    else  
        arrsize = 40;
    for(i = 0; i < arrsize; i++){
        arr[i] = 100;
        printf("%d\n", arr[i]);
        // printf("hello");
    }
    // printf("%d", arrsize);
}

void question8(){
    static int b[] = {10, 20, 30, 40, 50};
    for(int i = 0; i <= 4; i++)
        printf("%d, ", i[b]);//b[i] internally converts this to *(b+i), which means value at the address which is i locations after the base address. so, *(i+b) is same as *(i+b) or i[b] 
}

// void question12(){
//     int i, arr(25);//error: expected declaration specifiers or '...' before numeric constant
//     for(i = 0; i <= 100; i++){
//         arr(i) = 100;//error: lvalue required as left operand of assignment       
//         printf("%d\n", arr(i));
//     }
// }

void question13(){
    static int a[] = {10,20,30,40,50};
    int j;
    for(j = 0; j < 5; j++){
        printf("%d", *a);
        // a++;//error: lvalue required as increment operand
    }
}

void question14(){
    static float a[] = {13.24, 1.5, 1.5, 5.4, 3.5};
    float *j, *k;
    j = a;
    k = a+4;
    // j = j*2;
    // k = k/2; // multiplication or division of a pointer not allowed
    printf("%f %f", *j, *k);
}

void question15(){
    int n[25];
    n[0] = 100;
    n[24] = 200;
    printf("%d %d", *n, *(n+24) + *(n+0));
}

void question16(){
    static int b[] = {10, 20, 30, 40, 50};
    int i, *k;
    k = &b[4]-4;
    for(i = 0; i <= 4; i++){
        printf("%d", *k);
        k++;
    }
}

int f(x, y)
int x, *y;
{
    x = *(y) += 2;
    return 0;
    
}

void question18(){
    static int a[5] = {2,4,6,8,10};
    int i, b = 5;
    for(i = 0; i <= 4; i++){
        f(a[i], &b);
        printf("%d %d\n", a[i], b);
    }
}

void question21(){
    int arr[] = {0,1,2,3,4};
    int i, *ptr;
    for(ptr = &arr[0], i = 0; i <= 4; i++){
        printf("%d\n", ptr[i]);
    }
}

void question22(){
    int arr[] = {0, 1, 2, 3,4};
    int i, *p;
    for(p = arr, i = 0; p+i <= arr+4; p++, i++)
        printf("%d", *(p+i));
}

void question26(){
    int b = 5;
    static int a[] = {0,1,2,3,4};
    static int *p[] = {a, a+1, a+2, a+3, a+4};
    int **ptr = &p[0];
    printf("%d %d %d\n", a, *a, &a[0]);
    printf("%d %d %d %d\n", p, &p[0], *p, **p);
    printf("%d %d %d\n", ptr, *ptr, **ptr);//doubt  
}

void question27(){
    static int a[] = {0,1,2,3,4};
    static int *p[] = {a, a+1, a+2, a+3, a+4};
    int **ptr = p;
    ptr++;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);

    *ptr++;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);

    *++ptr;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);

    ++*ptr;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);
}

void question28(){
    static int a[] = {0, 1, 2, 3, 4};
    static int *p[] = {a, a+1, a+2, a+3, a+4};
    int **ptr;
    ptr = p;

    **ptr++;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);

    *++*ptr;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);

    ++**ptr;
    printf("%d %d %d\n", ptr-p, *ptr-a, **ptr);
}

void question29(){
    static int n[3][3] = {
                            2,4,3,
                            6,8,5,
                            3,5,1
                        };
    printf("%d %d %d", n, n[2], n[2][2]);
}

// void question30(){
//     static int n[3][3] = {
//                             2,4,3,
//                             6,8,5,
//                             3,5,1
//                         };
//     int i, *ptr;
//     ptr = n;                   
//     printf("%d %d %d", n[2], ptr[2], *(ptr + 2));
// }

void question31(){
    static int n[3][3] = {
                            2, 4, 3,
                            6, 8, 5, 
                            3, 5, 1
                        };
    int i, j;
    for(i = 2; i >= 0; i--){
        for(j = 2; j >= 0; j--){
            printf("%d %d\n", n[i][j], *(*(n+i)+j));
        }
    }
}

void main(){
    // question2();
    // question3();
    // question5();
    // question6();
    // question8();
    // question12();
    // question13();
    // question14();
    // question15();
    // question16();
    // question18();//doubt
    // question21();//doubt
    // question22();
    // question26();
    // question27();
    // question28();
    // question29();
    // question30();
    question31();
}