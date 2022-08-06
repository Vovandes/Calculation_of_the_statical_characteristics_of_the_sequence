#pragma once

#include "statistics.hpp"

class Pct95 : public IStatistics {
public:
	Pct95() : pct95_{ 0.0 } { }

	void update() override {
		if (!vect.empty()) {
			if (!getIsSortVector()) {
				SortingVector();
			}
			auto tmp = static_cast<std::size_t>(std::floor(0.95 * vect.size()));
			pct95_ = vect[tmp];
		}
		else {
			std::cout << "Vector is empty!!!" << std::endl;
		}
	}

	double eval() const override {
		return pct95_;
	}

	const char* name() const override {
		return "pct95";
	}

private:
	double pct95_;
};