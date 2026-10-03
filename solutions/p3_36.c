#include <stdio.h>

int main(){
  for(int i = 100; i < 999; i++){
    int first = i / 100 % 10;
    int second = i / 10 % 10;
    int third = i / 1 % 10;

    if(i == first * first * first + second * second * second + third * third * third){
      printf("%d\n", i);
    }
  }
  return 0;
}
