#include <stdio.h>

int main(void){
    double a;
    double b;
    double c;
    printf("Enter a non-zero number: ");
    scanf("%lf",&a);
    printf("Enter a non-zero number: ");
    scanf("%lf",&b);
    printf("Enter a non-zero number: ");
    scanf("%lf",&c);

    if(a*a +b*b == c*c){
        printf("%.2lf, %.2lf,%.2lf could be sizes of a right triangle",a,b,c);
    }
    else if(c*c +b*b == a*a){
        printf("%.2lf, %.2lf,%.2lf could be sizes of a right triangle",a,b,c);
    }
    else if(a*a +c*c == b*b){
        printf("%.2lf, %.2lf,%.2lf could be sizes of a right triangle",a,b,c);
    } else{
        printf("%.2lf, %.2lf,%.2lf could not be sizes of a right triangle",a,b,c);
    }
}
