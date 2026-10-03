#include <stdio.h>

int main(){
  int num;
  int count = 0;
  printf("Please enter a number: ");
  scanf("%d", &num);

  for(int i = 10000; i > 0; i = i/10){
    int digit = num / i % 10;
    if(digit == 9){
      count++;
    }
  }
  printf("There are %d 9s", count);
  return 0;
}
