#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 8; i++) {
        if (i % 2 == 0) {
            printf("%s", " ");
        }
        for (int j = 1; j <= 8; j++) {
            printf("%s", "* ");
        }
        puts(""); // \n ile eyni seydi
    }
    
    return 0;
}