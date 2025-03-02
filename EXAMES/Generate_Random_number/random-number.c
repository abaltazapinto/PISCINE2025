#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int max;
    printf("Enter the maximum number: ");
    scanf("%d", &max);
    
    if (max <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    
    srand(time(NULL));
    int random_number = rand() % (max + 1);
    
    printf("Random number: %d\n", random_number);
    
    return 0;
}

