#include <stdio.h>

int main(){
  int birthDay;
  int birthMonth;
  int birthYear;
  int currentDay;
  int currentMonth;
  int currentYear;

  printf("Write the current date (day, month, year): " );
  scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);
  printf("Write your birthday (day, month, year): " );
  scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

  int age = currentYear - birthYear;
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }

  printf("You are %d years old \n", age);
  int maxHeartRate = 220 - age;

  int heartRateRangeMin = maxHeartRate * 0.5;
  int heartRateRangeMax = maxHeartRate * 0.85;
  printf("Your max heart-rate should be %d\n", maxHeartRate);
  printf("Your average heart-rate should be between:%d-%d\n", heartRateRangeMin, heartRateRangeMax);
  return 0;
}
