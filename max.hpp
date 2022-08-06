#pragma once

#include "statistics.hpp"



class Max : public IStatistics {
public:
	Max() : m_max_{ std::numeric_limits<double>::min() } { }

	void update() override {
		if (!vect.empty()) {
			auto x = std::max_element(vect.begin(), vect.end());
			if (m_max_ < *x) {
				m_max_ = *x;
			}
		}
		else {
			std::cout << "Vector is empty!!!" << std::endl;
		}
	}

	double eval() const override {
		return m_max_;
	}

	const char* name() const override {
		return "max";
	}

private:
	double m_max_;
};
