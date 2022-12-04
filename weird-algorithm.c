#include <stdio.h>
#include <stdbool.h>

int main(void) {
	long long n;

	scanf("%lld", &n);

	while (true) {
		printf("%lld ", n);
		
		if (n == 1) 
			break;
		else if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
	}
}
