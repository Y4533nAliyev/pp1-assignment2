#include <stdio.h>

int main(){
  int num;
  int a = 1;
  printf("Enter a number: ");
  scanf("%d", &num);
  for(int i = 2; i < num; i++){
    if(num % i == 0){
      printf("Not a prime number\n");
      a = 0;
      break;
    }
  }
  if(num == 1) printf("Not a prime number\n"), a = 0;
  if(a){
    printf("prime number\n");
  }

  return 0;
}
