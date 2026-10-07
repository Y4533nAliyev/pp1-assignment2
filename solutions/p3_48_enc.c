#include <stdio.h>


int main(){
    int da;
    printf("Enter the orginal data : ");
    scanf("%d" , &da);

    int da1 = (da / 1000 + 7) % 10;
    int da2 = (da / 100 % 10 + 7) % 10;
    int da3 = (da / 10 % 10 + 7) % 10;
    int da4 = (da % 10 + 7) % 10;

    printf("Encryption of data : %d-%d-%d-%d" , da3 , da4 , da1 , da2 );






}