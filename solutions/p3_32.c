#include <stdio.h>

int main(){
  int num;
  printf("Enter the size of the square: ");
  scanf("%d", &num);

  for(int i = 0; i < num; i++){
    for(int i = 0; i < num; i++){
      printf("%s", "*");
    }
    printf("\n");
  }
  return 0;
}
