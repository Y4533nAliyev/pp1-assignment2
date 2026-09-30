#include <stdio.h>

int main(){
  int accountNumber;
  double mortgageAmount;
  int mortgageTerm;
  double interestRate;
  double totalInterest;
  int MPI;
  while(1){
    printf("Enter Account Number (-1 to exit): ");
    scanf("%d", &accountNumber);
    if(accountNumber == -1){
      break;
    }
    printf("Enter mortgage amount (in dollars): ");
    scanf("%lf", &mortgageAmount);

    printf("Enter mortgage term (in years): ");
    scanf("%d", &mortgageTerm);

    printf("Enter interest rate (as a decimal): ");
    scanf("%lf", &interestRate);

    totalInterest = mortgageAmount * interestRate * mortgageTerm;

    MPI = (totalInterest + mortgageAmount) / (mortgageTerm * 12);
    printf("The monthly payable interest $%d\n", MPI);
    printf("\n");
  }
  return 0;
}
