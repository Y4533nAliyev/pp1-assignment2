#include <stdio.h>

int main(){
  int num;
  printf("Enter the size of the square: ");
  scanf("%d", &num);

  for(int i = 0; i < num; i++){
    for(int j = 0; j < num; j++){
      printf("%s", "*");
    }
    printf("\n");
  }
  return 0;
}
