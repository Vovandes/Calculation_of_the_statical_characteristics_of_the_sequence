#pragma once

#include "statistics.hpp"

class Mean : public IStatistics {
public:
	Mean() : m_arithmetic_average_{ 0.0 } { }

	void update() override {
		if (!vect.empty()) {
			m_arithmetic_average_ = std::accumulate(vect.begin(), vect.end(), 0.0) / vect.size();
		}
		else {
			std::cout << "Vector is empty!!!" << std::endl;
		}
	}

	double eval() const override {
		return m_arithmetic_average_;
	}

	const char* name() const override {
		return "mean";
	}

private:
	double m_arithmetic_average_;
};