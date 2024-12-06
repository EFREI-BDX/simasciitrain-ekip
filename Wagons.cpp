//
// Created by mehdi on 06/12/2024.
//

// Wagons.cpp
#include "Wagons.h"

namespace simasciitrain {
    Wagons::Wagons() = default;

    Wagons::~Wagons() {
        for (auto* wagon : wagons) {
            delete wagon;
        }
    }

    Wagons* Wagons::addWagon(AbstractWagon* wagon) {
        wagons.push_back(wagon);
        return this;
    }

    std::ostream& operator<<(std::ostream& os, const Wagons& wagons) {
        bool first = true;
        for (const auto* wagon : wagons.wagons) {
            if (!first) {
                os << '-';
            }
            wagon->print(os);
            first = false;
        }
        return os;
    }
}
