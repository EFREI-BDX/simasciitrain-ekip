//
// Created by mehdi on 06/12/2024.
//

// UtilityWagon.cpp
#include "UtilityWagon.h"

namespace simasciitrain {
    UtilityWagon::UtilityWagon() : AbstractWagon(TypeWagon::UTILITY) {}

    void UtilityWagon::print(std::ostream& os) const {
        os << '[' << getSymbol() << ']';
    }
}
