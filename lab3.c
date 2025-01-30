// Alexander Meyer
// 002
// Lab 3
// Date: 1/29/2025
// This program allows the user to enter a character from the keyboard and print// the ASCII decimal value of that character.

#include <stdio.h>
#include <math.h>

int main() {
    char input;
    double sqrt_value;
    int precision;

    // Prompt using stderr (ensures it stays on the screen when redirecting output)
    fprintf(stderr, "Pick an input on your keyboard: ");

    // Read a single character from user input
    scanf(" %c", &input);

    // Print the ASCII value of the character
    printf("The decimal value of '%c' is: %d\n", input, input);

    // Compute the square root of the ASCII value
    sqrt_value = sqrt((double)input);

    // Print the square root value
    printf("The square root of %d is: %.1f\n", input, sqrt_value);

    // Cast the square root to an integer for precision
    precision = (int)sqrt_value;

    // Print PI to the calculated precision
    printf("PI printed to %d decimal places is: %.*f\n", precision, precision, M_PI);

    return 0;
}
