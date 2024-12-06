//
// Created by mehdi on 06/12/2024.
//
// AbstractWagon.h
#ifndef SIMASCIITRAIN_ABSTRACTWAGON_H
#define SIMASCIITRAIN_ABSTRACTWAGON_H

#include "TrainElement.h"
#include "TypeWagon.h"

namespace simasciitrain {
    class AbstractWagon : public TrainElement {
    private:
        TypeWagon typeWagon;

    public:
        explicit AbstractWagon(const TypeWagon& typeWagon);
        virtual ~AbstractWagon() = default;
        char getSymbol() const override;
        std::string getType() const override;
        void print(std::ostream& os) const override;
        friend std::ostream& operator<<(std::ostream& os, const AbstractWagon& wagon);
    };
}

#endif