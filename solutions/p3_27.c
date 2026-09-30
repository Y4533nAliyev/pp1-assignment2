#include <stdio.h>

int main(void){
 int passes = 0;
 int failures = 0;
 int student = 1;
 int result;
 while (student <=10){

   printf("%s", "Enter result (1=pass, 2=fail): " );
   scanf("%d", &result);
   if(result == 1){
     passes++;
   }
   else if(result == 2){
     failures++;
   }
   else{
    printf("Wrong Entry, Try again!\n");
    continue;
   }
   student++;
 }

 printf("Passed %u\n", passes);
 printf("Failed %u\n", failures);
 return 0;
}
