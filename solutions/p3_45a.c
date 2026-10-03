#include <stdio.h>

int factorial(int x){
  if(x == 0){
    return 1;
  }
  return x * factorial(x-1);
}

int main(){

  for(int i = 1; i > 0; i++){
    double sum = 1 / factorial(i);
    printf("%d\n", sum);
  }
}
