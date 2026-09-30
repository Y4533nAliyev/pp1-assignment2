#include <stdio.h>

int main(){
  int number;
  int largest = 0;
  for(int counter = 0; counter < 10; counter++){
    printf("Enter number #%d: ", counter+1);
    scanf("%d", &number);
    if(number > largest){
      largest = number;
    }

  }
  printf("The largest number is: %d", largest);
}
