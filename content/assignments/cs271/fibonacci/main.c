#include <stdio.h>
#include <inttypes.h>
#include <math.h>

uint64_t fibonacci_recursive(uint64_t n);
uint64_t fibonacci_iterative(uint64_t n);
uint64_t fibonacci_closed(uint64_t n);

double phi;

int main() {
	uint64_t n;
	scanf("%" SCNu64, &n);

	phi = (1.0 + sqrt(5.0)) / 2.0;

	printf("Recursive: %" PRIu64 "\n", fibonacci_recursive(n));
	printf("Iterative: %" PRIu64 "\n", fibonacci_iterative(n));
	printf("Closed:    %" PRIu64 "\n", fibonacci_closed(n));

	return 0;
}
