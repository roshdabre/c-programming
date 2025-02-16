#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    // Asking the user for input
    printf("Enter two integers separated by space: ");
    scanf("%d %d", &number1, &number2);

    // Performing addition
    sum = number1 + number2;      
    
    // Displaying the result with better formatting
    printf("\nThe sum of %d and %d is: %d\n", number1, number2, sum);
    
    return 0;
}
