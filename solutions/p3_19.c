#include <stdio.h>

int main(){
  double loanPrincipal;
  double interestRate;
  int loanTerm;
  double interest;
  while(1){
    printf("Enter loan principal (-1 to end): ");
    scanf("%lf", &loanPrincipal);
    if(loanPrincipal == -1){
      break;
    }
    printf("Enter interest rate: ");
    scanf("%lf", &interestRate);

    printf("Enter term of the loan in days: ");
    scanf("%d", &loanTerm);

    interest = loanPrincipal * interestRate * loanTerm / 365;
    printf("The interest charge is $%.2lf\n", interest);
    printf("\n");
  }
  return 0;
}
