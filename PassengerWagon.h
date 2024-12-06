//
// Created by mehdi on 06/12/2024.
//



// PassengerWagon.h
#ifndef SIMASCIITRAIN_PASSENGERWAGON_H
#define SIMASCIITRAIN_PASSENGERWAGON_H

#include "AbstractWagon.h"

namespace simasciitrain {
    class PassengerWagon : public AbstractWagon {
    private:
        int passengerCount;

    public:
        explicit PassengerWagon(int passengerCount);
        ~PassengerWagon() override = default;
        int getPassengerCount() const;
        void setPassengerCount(int passengerCount);
        void print(std::ostream& os) const override;
    };
}
#endif
