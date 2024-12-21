#include <iostream>
#include <memory>

int main() {
	std::unique_ptr<int> ptr(new int(5));

	std::cout << *ptr << std::endl;

	*ptr = 10;

	std::cout << *ptr << std::endl;

	return 0;
}