#include <stdio.h>

int main(){
 printf("n\t n^2\t n^3\t n^4\n");
 printf("\n");
 for(int i = 1; i < 11; i++){
   printf("%d\t%d\t%d\t%d\n", i, i*i, i*i*i, i*i*i*i);
 }
 return 0;
}
