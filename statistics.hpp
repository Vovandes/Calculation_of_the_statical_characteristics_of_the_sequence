#pragma once

#include <iostream>
#include <limits>
#include <vector>
#include <algorithm>
#include <numeric>

class IStatistics {
public:
	virtual ~IStatistics() { }

	virtual void update() = 0;
	virtual double eval() const = 0;
	virtual const char* name() const = 0;

	void SortingVector() {
		std::system("cls");
		std::cout << "Input data:\t";
		PrintMyVector();
		std::sort(vect.begin(), vect.end(),
			[](const double a, const double b) {
				return a < b;
			});
		std::cout << "Sorting data:\t";
		PrintMyVector();

		isSortVector = true;

		std::cout << std::endl;
	}

	bool getIsSortVector() const { return isSortVector; }

	static void PrintMyVector() {
		for (const auto& iterator : vect) {
			std::cout << iterator << "   ";
		}
		std::cout << std::endl;
	}

	static std::vector<double> vect;

private:
	static bool isSortVector;
};

