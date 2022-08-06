#include "statistics.hpp"
#include "min.hpp"
#include "max.hpp"
#include "mean.hpp"
#include "std.hpp"
#include "pct90.hpp"
#include "pct95.hpp"

std::vector<double> IStatistics::vect;
bool IStatistics::isSortVector{ false };

int main() {
	setlocale(LC_ALL, "");

	std::vector<IStatistics*> statistics = {
		new Min{},
		new Max{} ,
		new Mean{},
		new Std{},
		new Pct90{},
		new Pct95 {}
	};

	double val = 0;

	while (std::cin >> val) {
		IStatistics::vect.push_back(val);
	}

	// Handle invalid input data
	if (!std::cin.eof() && !std::cin.good() || IStatistics::vect.empty()) {
		std::cerr << "Invalid input data" << std::endl;
		system("pause");
		return 1;
	}

	for (const auto& elem : statistics) {
		elem->update();
	}

	std::cout << "Statistics data:" << std::endl;
	// Print results if any
	for (const auto& iterator : statistics) {
		std::cout << iterator->name() << " = " << iterator->eval() << std::endl;
	}

	// Clear memory - delete all objects created by new
	for (auto& iterator : statistics) {
		delete iterator;
	}

	std::cout << std::endl;
	std::system("pause");
	return 0;
}