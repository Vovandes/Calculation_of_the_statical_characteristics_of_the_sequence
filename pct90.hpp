#pragma once

#include "statistics.hpp"

class Pct90 : public IStatistics {
public:
	Pct90() : pct90_{ 0.0 } { }

	void update() override {
		if (!vect.empty()) {
			if (!getIsSortVector()) {
				SortingVector();
			}
			auto tmp = static_cast<std::size_t>(std::floor(0.9 * vect.size()));
			pct90_ = vect[tmp];
		}
		else {
			std::cout << "Vector is empty!!!" << std::endl;
		}
	}

	double eval() const override {
		return pct90_;
	}

	const char* name() const override {
		return "pct90";
	}

private:
	double pct90_;
};