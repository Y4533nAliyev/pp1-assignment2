#include <stdio.h>

int main(){
  int number;
  int largest = 0;
  int secondLargest = 0;
  for(int counter = 0; counter < 10; counter++){
    printf("Enter number #%d: ", counter+1);
    scanf("%d", &number);
    if(number > largest){
      largest = number;
    }else{
      if(number > secondLargest){
        secondLargest = number;
      }
    }
  }
  printf("The largest number is: %d\n", largest);
  printf("The 2nd largest number is: %d\n", secondLargest);
  return 0;
}
