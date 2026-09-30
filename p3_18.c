#include <stdio.h>

int main(){
  double sales;

  while(1){
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%lf", &sales);

    if(sales == -1){
      break;
    }

    printf("Salary is $%.2lf\n", 200 + sales * 0.09);
    printf("\n");
  }
  return 0;
}
