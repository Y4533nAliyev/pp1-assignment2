#include <stdio.h>

int main(){
  for(int j = 0; j < 8; j++){
    if(j % 2 == 1){
      printf("%s", " ");
    }
    for(int i = 0; i < 8; i++){
      printf("%s", "* ");
    }
    puts("");
    return 0;
  }
}
