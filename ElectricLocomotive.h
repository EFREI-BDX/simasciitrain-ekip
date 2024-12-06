//
// Created by mehdi on 06/12/2024.
//


// ElectricLocomotive.h
#ifndef SIMASCIITRAIN_ELECTRICLOCOMOTIVE_H
#define SIMASCIITRAIN_ELECTRICLOCOMOTIVE_H

#include "AbstractLocomotive.h"

namespace simasciitrain {
    class ElectricLocomotive : public AbstractLocomotive {
    public:
        ElectricLocomotive();
        ~ElectricLocomotive() override = default;
    };
}

#endif

