#include <stdio.h>
#include <math.h>

double calculateTaylorSeries(double x, int n) {
    double result = 1.0; // The first term in the series

    double term = 1.0;
    for (int i = 1; i <= n; i++) {
        term *= x / i; // Calculate the next term based on the previous term
        result += term; // Add the term to the result
    }

    return result;
}

int main(void) {
    double x;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double taylorApproximation = calculateTaylorSeries(x, n);

    printf("e^%.2lf (approximated using %d terms): %lf\n", x, n, taylorApproximation);

    return 0;
}




