#include <stdio.h>

int main(void){
    double number;
    double theLargest = 0;
    double the2ndLargest =0;
    for(int counter = 1;counter<=10;counter++){
        printf("Enter a number: ");
        scanf("%lf",&number);
        if( number> theLargest){
            the2ndLargest = theLargest;
            theLargest = number;
        }
        
    }
    printf("The largest number is: %.2lf\n",theLargest);
    printf("The second largest number is: %.2lf\n",the2ndLargest);
}
