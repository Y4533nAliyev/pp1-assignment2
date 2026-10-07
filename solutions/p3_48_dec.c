#include <stdio.h>


int main(){
    int da;
    printf("Enter the Encrypted data : ");
    scanf("%d" , &da);

    int da1 = ( 100 + da / 1000 - 7) % 10;
    int da2 = ( 100 + da / 100 % 10 - 7) % 10;
    int da3 = ( 100 + da / 10 % 10 - 7) % 10;
    int da4 = ( 100 + da % 10 - 7) % 10;

    printf("Decryption of data : %d-%d-%d-%d" , da3 , da4 , da1 , da2 );






}