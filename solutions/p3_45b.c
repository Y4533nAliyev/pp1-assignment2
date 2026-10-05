#include <stdio.h>

double factorial(int x){
  if(x == 0 || x == 1){
    return 1;
  }
  return (double)x * factorial(x-1);
}
int main(){
  int terms;
  double e = 1.0; // Initialized to 1 for n = 0 term

  printf("Enter the number of terms to estimate e: ");
  scanf("%d", &terms);

  for (int i = 1; i < terms; i++) {
    e += 1.0 / factorial(i);
  }

  printf("Estimated value of e: %f\n", e);

  return 0;
}
