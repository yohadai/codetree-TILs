#include <iostream>
using namespace std;

int main() {
	char digit[8]{};
	std::cin >> digit;
	int n{};
	int cnt{};
	while (true) {
		if (digit[cnt] == '\0')
			break;

		n = 2 * n + (digit[cnt++] == '1' ? 1 : 0);

	}

	std::cout << n;
}