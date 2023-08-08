
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}



int main(void)
{
    bool keepRunning = true; // Initialize a boolean variable (And being fancy)

    while(keepRunning) 

    {

    printf("\npress 1 to genarate prime numbers from 0 - n\nPress 0 To detect wather a number is prime or not.\n ");
    int num, g;
    scanf("%d",&g);

    if(g<=0)
    {
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    }

    else if (g>=1)
    {

    int i, j, k, n, prime;

    printf("\nGenerate primes within the range 1 to (n): ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("No primes!\n");
    }
    else if (n == 1)
    {
        printf("No prime numbers in the specified range.\n");
    }
    else if (n >= 2)
    {
        printf("2 "); // 2 is the only even prime number

        for (i = 3; i <= n; i++)
        {
            prime = 1; // Assume 'i' is prime initially

            // Check for factors from 2 to sqrt(i)
            for (j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    prime = 0; // 'i' is not prime
                    break;
                }
            }

            if (prime)
            {
                printf("%d ", i);
            }
        }
    }
    }
    }

    return 0;

}



