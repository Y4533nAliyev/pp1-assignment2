#include <stdio.h>

int main(){
  double currentPopulation;
  double growthRate;
  printf("Write the current population: ");
  scanf("%lf", &currentPopulation);
  printf("Write the growth rate: ");
  scanf("%lf", &growthRate);

  for(int i = 1; i < 10; i++){
    currentPopulation = currentPopulation + currentPopulation * growthRate / 100;
    printf("The current population after #%d year(s): %.2lf\n", i, currentPopulation);
  }
}
