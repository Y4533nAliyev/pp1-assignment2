#include <stdio.h>

int main(){
  int hoursWorked;
  double hourlyRate;
  double salary;
  while(1){
    printf("Enter # of hours worked (-1 to exit): ");
    scanf("%d", &hoursWorked);
    if(hoursWorked == -1){
      break;
    }
    printf("Enter hourly rate of worker ($00.00): ");
    scanf("%lf", &hourlyRate);

    if(hoursWorked <= 40){
      salary = hoursWorked * hourlyRate;
    }else{
      salary = hoursWorked * hourlyRate + (hoursWorked - 40) * hourlyRate * 0.5;
    }


    printf("Salary is $%.2lf\n", salary);
    printf("\n");
  }
  return 0;
}
