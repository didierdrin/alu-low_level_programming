#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() {
    int n; 
    srand(time(0));
    n = rand() - RAND_MAX / 2; 

    if (n < 0 ) {
        printf("This is a negative number");
    } else if ( n > 0) {
        printf("This is a positive number");
    } else {
        printf("This is zero");
    }

    return 0; 
}