#include <iostream>
#include <list>

int main() {
	std::list<int> myList;
	int value;

	std::cout << "Enter 5 list items: ";
	for (int i = 0; i < 5; i++) {
		std::cin >> value;
		myList.push_back(value);
	}

	int valueToRemove;
	std::cout << "Enter the value to delete: ";
	std::cin >> valueToRemove;

	myList.remove(valueToRemove);

	std::cout << "Updated list: ";
	for (int x : myList) {
		std::cout << x << ' ';
	}
}