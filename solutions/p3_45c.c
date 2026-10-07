#include <stdio.h>
#include <math.h>

long long f(int a){
    long long x = 1;
    for (int i = 1 ; i <= a ; i++){
        x = x * i;
    }
    return x ;
}

int main() {
    int n , z ;
    double e = 1.0;
    long long t , y;

    printf("Enter the x to find e^x : ");
    scanf("%d", &z);
    
    printf("Enter the number of loops for e estimation :");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        t = f(i);
        y = pow( z , i );
        e  =  e + ( (float)y / (float)t);

    }
    
    printf("Estimated e^x: %.9lf\n", e);
    
    return 0;
}