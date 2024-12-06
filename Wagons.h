//
// Created by mehdi on 06/12/2024.
//
// Wagons.h
#ifndef SIMASCIITRAIN_WAGONS_H
#define SIMASCIITRAIN_WAGONS_H

#include <vector>
#include "AbstractWagon.h"

namespace simasciitrain {
    class Wagons {
    private:
        std::vector<AbstractWagon*> wagons;

    public:
        Wagons();
        ~Wagons();
        Wagons* addWagon(AbstractWagon* wagon);
        friend std::ostream& operator<<(std::ostream& os, const Wagons& wagons);
    };
}

#endif