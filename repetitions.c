#include <stdio.h>

int main(void) {
	int c, last = -1;
	long count = 0, max = -1;

	while ((c = getchar()) != EOF) {
		if (c != last) {
			if (count > max)
				max = count;
			last = c, count = 1;
		} else {
			++count;
		}
	}

	printf("%ld", max);
}
