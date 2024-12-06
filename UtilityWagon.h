//
// Created by mehdi on 06/12/2024.
//
// UtilityWagon.h
#ifndef SIMASCIITRAIN_UTILITYWAGON_H
#define SIMASCIITRAIN_UTILITYWAGON_H

#include "AbstractWagon.h"

namespace simasciitrain {
    class UtilityWagon : public AbstractWagon {
    public:
        UtilityWagon();
        ~UtilityWagon() override = default;
        void print(std::ostream& os) const override;
    };
}

#endif