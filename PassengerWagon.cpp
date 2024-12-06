//
// Created by mehdi on 06/12/2024.
//
// PassengerWagon.cpp
#include "PassengerWagon.h"

namespace simasciitrain {
    PassengerWagon::PassengerWagon(int passengerCount)
        : AbstractWagon(TypeWagon::PASSENGER), passengerCount(passengerCount) {}

    int PassengerWagon::getPassengerCount() const { return passengerCount; }

    void PassengerWagon::setPassengerCount(int passengerCount) {
        this->passengerCount = passengerCount;
    }

    void PassengerWagon::print(std::ostream& os) const {
        os << '[';
        for (int i = 0; i < passengerCount; ++i) {
            os << getSymbol();
        }
        os << ']';
    }
}

