#include <stdio.h>

int main(void) {
	long long n, sum, x;

	scanf("%lld", &n);

	if (n % 2 == 0)
		sum = (n / 2) * (n + 1);
	else
		sum = n * ((n + 1) / 2);

	while (--n > 0) {
		scanf("%lld", &x);

		sum -= x;
	}

	printf("%lld", sum);
}