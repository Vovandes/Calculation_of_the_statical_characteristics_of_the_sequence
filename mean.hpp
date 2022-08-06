#pragma once

#include "statistics.hpp"

class Mean : public IStatistics {
public:
	Mean() : m_arithmetic_average_{ 0.0 } { }

	void update() override {
		if (!vect.empty()) {
			m_arithmetic_average_ = std::accumulate(vect.begin(), vect.end(), 0.0) / vect.size();
			//m_arithmetic_average_ = Sum() /vect.size();
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

	double Sum() {
		double sum{ 0.0 };
		for (const auto& elem : vect) {
			sum += elem;
		}

		return sum;
	}

private:
	double m_arithmetic_average_;
};