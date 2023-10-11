// 5.6-2.cpp 

#include <iostream>
#include <set>

int main() {
	int count_input_n, num;
	std::set<int> set;

	std::cin >> count_input_n;

	while (count_input_n) {
		std::cin >> num;
		set.insert(num);

		count_input_n--;
	}

	std::cout << "reverse:\n";
	for (auto iter = set.rbegin(); iter != set.rend(); ++iter) {
		std::cout << *iter << std::endl;
	}
}