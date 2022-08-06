#pragma once

#include "statistics.hpp"

class Std : public Mean {
public:
	Std() : std_{ 0.0 } { }

	void update() override {
		if (!vect.empty()) {
			auto tmp = std::accumulate(vect.begin(), vect.end(), 0.0) / vect.size();
			//auto tmp = Sum()/vect.size();

			for (const auto& elem : vect) {
				std_ += std::pow(elem - tmp, 2);
			}
			std_ /= vect.size();
			std_ = std::sqrt(std_);
		}
		else {
			std::cout << "Vector is empty!!!" << std::endl;
		}
	}

	double eval() const override {
		return std_;
	}

	const char* name() const override {
		return "std";
	}

private:
	double std_;
};
