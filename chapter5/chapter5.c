#include <stdio.h>

void NumberOfDays(){
    int d1, d2, m1, m2, y1, y2, number_days = 0;
    char c;
    printf("enter the first date = ");
    scanf("%d,%d,%d", &d1, &m1, &y1);
    printf("enter the second date = ");
    scanf("%d,%d,%d", &d2, &m2, &y2);
    for(int i = m1; i < m2; i++){
        if(i == 2){
          number_days = number_days + 28;     
        }
        else if(i <= 7){
            if(i%2 == 0){
                number_days = number_days + 30;
            }
            else{
                number_days = number_days + 31;
            }
        }
        else{
            if(i%2 == 1){
                number_days = number_days + 30;
            }
            else{
                number_days = number_days + 31;
            }
        }
    }
    number_days = number_days + (d2-d1) + (y2-y1);
    printf("number of days between %d,%d,%d and %d,%d,%d = %d days", d1, m1, y1, d2, m2, y2, number_days-1);
}

void computeSmallestNumberOfNotes(){
    int n;
    int x = 100;
    int num_notes = 0;
    printf("enter the sum of ruppees n = ");
    scanf("%d", &n);
    for(int i = n ; i != 0; ){
        num_notes = num_notes + i/x;
        i = i%x ;
        if(x == 50){
            x = x/5;
        }
        else{
            x = x/2;
        }
    }
    printf("smallest number of notes to get sum ruppees %d = %d ", n, num_notes);
}

void main(){
//    NumberOfDays(); 
//    computeSmallestNumberOfNotes();
}