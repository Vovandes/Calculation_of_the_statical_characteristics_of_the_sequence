#pragma once

#include "statistics.hpp"

class Min : public IStatistics {
public:
	Min() : m_min_{ std::numeric_limits<double>::max() } { }

	void update() override {
		if (!vect.empty()) {
			auto x = std::min_element(vect.begin(), vect.end());
			if (m_min_ > *x) {
				m_min_ = *x;
			}
		}
		else {
			std::cout << "Vector is empty!!!" << std::endl;
		}
	}

	double eval() const override {
		return m_min_;
	}

	const char* name() const override {
		return "min";
	}

private:
	double m_min_;
};