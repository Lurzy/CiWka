#include <iostream>
#include <stack>
#include <string>


bool isPalindrome(const std::string& str) {
	std::stack < char> s;
	int n = str.length();

	for (int i = 0; i < n / 2; i++) {
		s.push(str[i]);
	}

	int start = (n + 1) / 2;

	for (int i = start; i < n; i++) {
		if (str[i] != s.top()) {
			return false;
		}
		s.pop();
	}

	return true;
}

int main() {
	std::string str;
	std::cout << "Enter string: ";
	std::getline(std::cin, str);
	std::cout << str << " Is a palindrome: " << std::boolalpha << isPalindrome(str) << '\n';

}