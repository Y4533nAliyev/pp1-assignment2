#include <stdio.h>

int main(){
 printf("A\t A+3\t A+6\t A+9\n");
 printf("\n");
 for(int i = 7; i < 40; i=i+7){
   printf("%d\t%d\t%d\t%d\n", i, i+3, i+6, i*9);
 }
 return 0;
}
