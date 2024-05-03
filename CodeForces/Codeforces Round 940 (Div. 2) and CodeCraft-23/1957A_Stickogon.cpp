#include <iostream>
#include <map>
#include <vector>

// unsolved

int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::map<int, int> stick_counts;
		for (int i = 0; i < n; ++i) {
			int length;
			std::cin >> length;
			++stick_counts[length];
		}

		int polygons = 0;
		for (auto& x : stick_counts) {
			polygons += x.second / x.first;
		}

		std::cout << polygons << std::endl;
	}
	return 0;
}
