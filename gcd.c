#include <stdio.h>

int gcd(int m, int n);

int main(void) {
	int m, n;
	printf("Enter first number: ");
	scanf("%d", &m);
	printf("Enter second number: ");
	scanf("%d", &n);
	getchar();
	printf("GCD of m = %d and n = %d is: %d", m, n, gcd(m,n));
	printf("\nPress enter to quit...");
	getchar();
	return 0;
}

/* Euclid's Algorithm */
int gcd(int m, int n) {	
	while(n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

// 12: 1, 2, 3, 4, 6, 12
// 24: 1, 2, 3, 4, 6, 8, 12, 24
// 60: 1, 2, 4, 5, 6, 10, 12, 15, 20, 24, 30, 60
// 12786530 & 24652200

// f(x) = 2 + x = 5? x = 3.
// f(m, n) = f(n, m mod n or remainder) | f(60, 24) = f(24, 12) = f(12, 0).
// 60 / 24 -> 48 - 60 = r12.