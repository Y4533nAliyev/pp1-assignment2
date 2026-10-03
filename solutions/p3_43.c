#include <stdio.h>

int main(){
  int a = 0;
  int b = 0;
  int c = 0;
  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  if(a > b && a > c && a < b + c){
    printf("These sides can represent a triangle\n");
  } else if(b > c && b > a && b < a + c){
    printf("These sides can represent a triangle\n");
  } else if(c > a && c > b && c < a + b){
    printf("These sides can represent a triangle\n");
  } else{
    printf("These sides cannot represent a triangle\n");
  }

  return 0;
}
