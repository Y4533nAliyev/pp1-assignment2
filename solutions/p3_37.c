#include <stdio.h>

int main(){
  for(int i = 1; i <= 500; i++){
    printf("%s", "$ ");
    if(i % 50 == 0){
      printf("\n");
    }
  }
  return 0;
}
