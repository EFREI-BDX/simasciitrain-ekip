//
// Created by mehdi on 06/12/2024.
//
// GasolineLocomotive.h
#ifndef SIMASCIITRAIN_GASOLINELOCOMOTIVE_H
#define SIMASCIITRAIN_GASOLINELOCOMOTIVE_H

#include "AbstractLocomotive.h"

namespace simasciitrain {
    class GasolineLocomotive : public AbstractLocomotive {
    public:
        GasolineLocomotive();
        ~GasolineLocomotive() override = default;
    };
}

#endif