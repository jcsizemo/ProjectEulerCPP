#include "problems.h"
#include "Fib.h"

int main(void) {
	std::cout << fib(50) << std::endl;

	for (int i = 0; i < 10000000; i++) fib(i);
	int x = 2;
}