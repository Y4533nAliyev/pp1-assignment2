#include <stdio.h>

int main(){
  double totalAmount;
  double salesAmount;
  double countyTax;
  double stateTax;
  double totalTax;

  char name[10] = "";
  while(1){
    printf("Enter the total amount collected (-1 to quit): ");
    scanf("%lf", &totalAmount);
    if(totalAmount == -1){
      break;
    }
    printf("Enter the name of the month: ");
    scanf("%s", name);
    salesAmount =  totalAmount / 1.09;
    countyTax = salesAmount * 0.05;
    stateTax  = salesAmount * 0.04;
    totalTax  = countyTax + stateTax;

    printf("Total Collections: %.2lf\n", totalAmount);
    printf("Sales: %.2lf\n", salesAmount);
    printf("County Sales Tax: %.2lf\n", countyTax);
    printf("State Sales Tax: %.2lf\n", stateTax);
    printf("Total Sales Tax Collected: %.2lf\n", totalTax);
    printf("\n");
  }
    return 0;
}
