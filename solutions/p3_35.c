#include <stdio.h>

int main(){
  int num;
  int counter = 5;
  int seperated = 0;
  int decimal = 0;
  printf("Please enter a binary number: ");
  scanf("%d", &num);

  for(int i =10000; i > 0; i = i /10){
    seperated = num / i % 10;
    switch(counter){
      case 1:
        decimal += seperated * 1;
        break;
      case 2:
        decimal += seperated * 2;
        break;
      case 3:
        decimal += seperated * 4;
        break;
      case 4:
        decimal += seperated * 8;
        break;
      case 5:
        decimal += seperated * 16;
        break;
    }
    counter--;
  }
    printf("the answer is %d\n", decimal);
}
