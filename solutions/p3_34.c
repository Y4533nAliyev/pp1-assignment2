#include <stdio.h>
#include <math.h>

int main(){
    int a , heh = 0 ;
    scanf("%d" , &a );
    for(int i = 0 ; i < a ; i++){ 

        for (int j = 0 ; j < i + 1 ; j++ ){ 
            heh++;
            printf("%d\t" , heh ); 

        }
        printf("%s" , "\n" ); 

    }
    

}