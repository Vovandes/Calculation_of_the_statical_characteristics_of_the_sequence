#include "statistics.hpp"

//int main() {
//
//	const size_t statistics_count = 1;
//	IStatistics* statistics[statistics_count];
//
//	statistics[0] = new Min{};
//
//	double val = 0;
//	while (std::cin >> val) {
//		for (auto& iterator : statistics) {
//			iterator->update(val);
//		}
//		/*for (size_t i = 0; i < statistics_count; ++i) {
//			statistics[i]->update(val);
//		}*/
//	}
//
//	// Handle invalid input data
//	if (!std::cin.eof() && !std::cin.good()) {
//		std::cerr << "Invalid input data\n";
//		return 1;
//	}
//
//	// Print results if any
//	for (const auto& iterator : statistics) {
//		std::cout << iterator->name() << " = " << iterator->eval() << std::endl;
//	}
//	/*for (size_t i = 0; i < statistics_count; ++i) {
//		std::cout << statistics[i]->name() << " = " << statistics[i]->eval() << std::endl;
//	}*/
//
//	// Clear memory - delete all objects created by new
//	for (auto& iterator : statistics) {
//		delete iterator;
//	}
//	/*for (size_t i = 0; i < statistics_count; ++i) {
//		delete statistics[i];
//	}*/
//
//	return 0;
//}


