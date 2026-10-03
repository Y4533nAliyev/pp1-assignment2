#include <stdio.h>

int main(){
  int num;
  printf("Enter the size of the square: ");
  scanf("%d", &num);

  for(int i = 0; i < num; i++){
    for(int j = 0; j < num; j++){
      if(i == 0 || i == num-1){
        printf("%s", "*");
      }else{
        if(j == 0 || j == num-1){
          printf("%s", "*");
        }else{
          printf("%s", " ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}
