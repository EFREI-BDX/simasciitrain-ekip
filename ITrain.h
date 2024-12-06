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
    };
}

#endif

// Train.h
#ifndef SIMASCIITRAIN_TRAIN_H
#define SIMASCIITRAIN_TRAIN_H

#include "ITrain.h"
#include "Wagons.h"
#include "AbstractLocomotive.h"

namespace simasciitrain {
    class Train : public ITrain {
    private:
        Wagons* wagons;
        AbstractLocomotive* locomotive;

    public:
        Train(Wagons* wagons, AbstractLocomotive* locomotive);
        ~Train() override;
        void print(std::ostream& os) const override;
        friend std::ostream& operator<<(std::ostream& os, const Train& train);
    };
}

#endif