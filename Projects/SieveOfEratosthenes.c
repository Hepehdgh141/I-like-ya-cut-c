#include <stdio.h>

#define MAX_SIZE 1000000

int is_prime[MAX_SIZE + 1]

void sieve_of_eratosthenes(int number) {
    for (int i = 2; i <= number; i++) {
        is_prime[i] = 1;
    }
    for (int prime = 2; prime * prime <= number; prime++) {
        if (is_prime[prime]) {
            for (int multiple = prime * prime; multiple <= number; multiple += prime) {
                is_prime[multiple] = 0;
            }
        }
    }
    for (int i = 2; i <= number; i++) {
        if (is_prime[i]) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    sieve_of_eratosthenes(n);

    return 0;
}
