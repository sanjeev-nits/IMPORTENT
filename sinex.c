#include <stdio.h>
#include <math.h>

int factorial(int);
float sine(float, int);

int main() { // Changed void main() to int main()
    float x;
    int n;

    printf("Enter the value of X: ");
    scanf("%f", &x);
    printf("\nEnter the number of terms: ");
    scanf("%d", &n); // Corrected scanf("%f", &x) to scanf("%d", &n)
    float a = sine(x, n);
    printf("The sine of %f is %f\n", x, a);
    return 0;
}
// Function to calculate factorial
int factorial(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++)
        fact *= i;
    return fact;
}

// Function to calculate sine
float sine(float x, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x, 2 * i + 1)*pow(-1,i) / factorial(2 * i + 1); // Corrected the factorial term
    }
    return sum;
}
