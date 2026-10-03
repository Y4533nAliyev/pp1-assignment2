#include <stdio.h>

int main(){
  int a = 0;
  int b = 0;
  int c = 0;

  printf("Enter the sides of the triangle: ");
  scanf("%d %d %d", &a, &b, &c);

  if(a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b){
    printf("The numbers can represent a right-sided triangle\n");
  } else{
    printf("The numbers cannot represent a right-sided triangle\n");
  }
  return 0;
}
