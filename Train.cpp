//
// Created by mehdi on 06/12/2024.
//

// Train.cpp
#include "Train.h"

namespace simasciitrain {
    Train::Train(Wagons* wagons, AbstractLocomotive* locomotive)
        : wagons(wagons), locomotive(locomotive) {}

    Train::~Train() {
        delete locomotive;
    }

    void Train::print(std::ostream& os) const {
        os << *wagons << '-' << *locomotive;
    }
}
