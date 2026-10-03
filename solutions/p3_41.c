#include <stdio.h>

int main(){
  float radius;
  printf("Write the radius of a circle: ");
  scanf("%f", &radius);

  printf("The diameter is %.2f\n", radius * 2);
  printf("The circumfrence is %.2f\n", radius * 3.14159);
  printf("The Area is %.2f\n", radius * (3.14159) * (3.14159));
  return 0;
}
