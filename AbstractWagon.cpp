//
// Created by mehdi on 06/12/2024.
//

// AbstractWagon.cpp
#include "AbstractWagon.h"

namespace simasciitrain {
    AbstractWagon::AbstractWagon(const TypeWagon& typeWagon) : typeWagon(typeWagon) {}

    char AbstractWagon::getSymbol() const { return typeWagon.getSymbol(); }

    std::string AbstractWagon::getType() const { return typeWagon.getName(); }

    void AbstractWagon::print(std::ostream& os) const {
        os << '[' << getSymbol() << ']';
    }

    std::ostream& operator<<(std::ostream& os, const AbstractWagon& wagon) {
        wagon.print(os);
        return os;
    }
}
