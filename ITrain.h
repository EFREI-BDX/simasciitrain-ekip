//
// Created by mehdi on 06/12/2024.
//


// ITrain.h
#ifndef SIMASCIITRAIN_ITRAIN_H
#define SIMASCIITRAIN_ITRAIN_H

#include <ostream>

namespace simasciitrain {
    class ITrain {
    public:
        virtual ~ITrain() = default;
        virtual void print(std::ostream& os) const = 0;
        friend std::ostream& operator<<(std::ostream& os, const ITrain& train) {
            train.print(os);
            return os;
        }

    };
}

#endif
