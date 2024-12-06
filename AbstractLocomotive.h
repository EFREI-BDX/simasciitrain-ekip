//
// Created by mehdi on 06/12/2024.
//


// AbstractLocomotive.h
#ifndef SIMASCIITRAIN_ABSTRACTLOCOMOTIVE_H
#define SIMASCIITRAIN_ABSTRACTLOCOMOTIVE_H

#include "TrainElement.h"
#include "TypeLocomotive.h"

namespace simasciitrain {
    class AbstractLocomotive : public TrainElement {
    protected:
        TypeLocomotive typeLocomotive;

    public:
        explicit AbstractLocomotive(const TypeLocomotive& typeLocomotive);
        virtual ~AbstractLocomotive() = default;
        char getSymbol() const override;
        std::string getType() const override;
        void print(std::ostream& os) const override;
        friend std::ostream& operator<<(std::ostream& os, const AbstractLocomotive& locomotive);
    };
}

#endif
