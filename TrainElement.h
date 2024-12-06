//
// Created by mehdi on 06/12/2024.
//
#ifndef SIMASCIITRAIN_TRAINELEMENT_H
#define SIMASCIITRAIN_TRAINELEMENT_H

#include <string>
#include <ostream>

namespace simasciitrain {
    class TrainElement {
    public:
        virtual ~TrainElement() = default;
        virtual char getSymbol() const = 0;
        virtual std::string getType() const = 0;
        virtual void print(std::ostream& os) const = 0;
    };
}

#endif

