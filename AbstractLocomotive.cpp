//
// Created by mehdi on 06/12/2024.
//


// AbstractLocomotive.cpp
#include "AbstractLocomotive.h"

namespace simasciitrain {
    AbstractLocomotive::AbstractLocomotive(const TypeLocomotive& typeLocomotive)
        : typeLocomotive(typeLocomotive) {}

    char AbstractLocomotive::getSymbol() const { return typeLocomotive.getSymbol(); }

    std::string AbstractLocomotive::getType() const { return typeLocomotive.getName(); }

    void AbstractLocomotive::print(std::ostream& os) const {
        os << '[' << getSymbol() << "]>";
    }

    std::ostream& operator<<(std::ostream& os, const AbstractLocomotive& locomotive) {
        locomotive.print(os);
        return os;
    }
}
